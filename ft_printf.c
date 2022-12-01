/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:04:27 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 13:50:06 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			args;
	char			**tab_args;
	unsigned int	nb_args;
	unsigned int	i;

	nb_args = count_args(format);
	tab_args = ft_calloc((nb_args * 2 + 2), sizeof(*tab_args));
	if (!tab_args)
		return (-1);
	va_start(args, nb_args);
	while (*format)
	{
		tab_args[i] = get_next(&format, args);
		if (tab_args[i] == NULL)
		{
			free_tab(tab_args);
			return (-1);
		}
		i++;
	}
	return (print_all(tab_args));
}

char	*get_next(char **str, va_list args)
{
	unsigned int	i;
	char			*new_elem;

	i = 0;
	if (*str[i] == '%' && is_arg(*str[i + 1]))
	{
		new_elem = ft_arg(*str[i + 1], args);
		*str += 2;
	}
	else
		new_elem = ft_cpy_str(str);
	return (new_elem);
}

char	ft_arg(char c, va_list args)
{
	if (c == 'c')
		return (ft_c(va_args(args, char)));
	if (c == 's')
		return (ft_s(va_args(args, char *)));
	if (c == 'p')
		return (ft_p(va_args(args, void *)));
	if (c == 'd')
		return (ft_d(va_args(args, int)));
	if (c == 'i')
		return (ft_i(va_args(args, int)));
	if (c == 'u')
		return (ft_u(va_args(args, unsigned int)));
	if (c == 'x')
		return (ft_x(va_args(args, int)));
	if (c == 'X')
		return (ft_X(va_args(args, int)));
}

int	print_all(char **tab)
{
	char	*str;
	int		nb_print;

	str = join_tab(tab);
	free_tab(tab);
	if (!str)
		return (-1);
	nb_print = write (1, str, ft_strlen(str));
	free(str);
	return (nb_print);
}

char	*join_tab(char **tab)
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	len = 0;
	i = 0;
	while (tab[i])
	{
		len += ft_strlen(tab[i]);
		i++;
	}
	str = calloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL)
	i = 0;
	while (tab[i])
	{
		ft_strcat(str, tab[i]);
		i++;
	}
	return (str);
}

void	free_tab(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free(tab);
}
