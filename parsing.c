/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:12:05 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 13:49:01 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	count_args(const char *str)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_arg(str[i + 1]))
		{
			count++;
			i += 2;
		}
		else if (str[i] == '%' && str[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	return (count);
}

int	is_arg(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' \
			|| c == 'u' || c == 'x' || c == 'X');
}
