/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:02:40 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:25:23 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	put_to_dec(long n, t_buffer *buf)
{
	unsigned int	i;
	int				is_neg;
	char			str[20];

	is_neg = 0;
	if (n == 0)
		return (fill_buf(buf, "0", 1));
	if (n < 0)
	{
		is_neg = 1;
		n *= -1;
	}
	i = 19;
	while (n)
	{
		str[i--] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		str[i--] = '-';
	i++;
	return (fill_buf(buf, &str[i], 20 - i));
}
