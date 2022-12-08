/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_hex_to_buf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:02:50 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:30:12 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	low_hex_to_buf(unsigned int n, t_buffer *buf)
{
	return (put_to_hex(n, "0123456789abcdef", buf));
}
