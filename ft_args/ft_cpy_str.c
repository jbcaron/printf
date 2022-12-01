/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:12 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 13:35:33 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_len(char *str)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '%')
		{
			len++;
			i += 2;
		}
		else if (str[i] == '%' && is_arg(str[i + 1]))
			break;
		else
		{
			len++;
			i++;
		}
	}
	return (len);
}

char	*ft_cpy_str(char **str)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	cpy = malloc(sizeof(*cpy) * (ft_len(*str) + 1));
	if (!cpy)
		return (NULL);
	while(str[i])
	{
		if (*str[i] == '%' && is_arg(*str[i + 1]))
			break;
		if (*str[i] == '%' && *str[i + 1] == '%')
			str ++
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	*str += i;
	return (cpy;)
}
