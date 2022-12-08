/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_to_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:27:41 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:24:38 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

ssize_t	ptr_to_buf(void *p, t_buffer *buf)
{
	if (!p)
		return (fill_buf(buf, "(nil)", 5));
	if (fill_buf(buf, "0x", 2) < 0)
		return (-1);
	return (put_to_hex((size_t)p, "0123456789abcdef", buf));
}
