/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_hex_to_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:10:19 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:32:47 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	up_hex_to_buf(unsigned int n, t_buffer *buf)
{
	return (put_to_hex(n, "0123456789ABCDEF", buf));
}
