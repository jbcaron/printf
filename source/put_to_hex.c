/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:42:36 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:25:08 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

ssize_t	put_to_hex(unsigned long n, const char *hex_base, t_buffer *buf)
{
	unsigned int	i;
	char			str[16];

	if (ft_strlen(hex_base) != 16)
		return (-1);
	if (n == 0)
		return (fill_buf(buf, "0", 1));
	i = 15;
	while (n)
	{
		str[i] = hex_base[n & 0xf];
		n >>= 4 ;
		i--;
	}
		i++;
	return (fill_buf(buf, &str[i], 16 - i));
}
