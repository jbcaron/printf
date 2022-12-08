/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:26:32 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:25:34 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	str_to_buf(char *s, t_buffer *buf)
{
	if (!s)
	{
		return (fill_buf(buf, "(null)", 6));
	}
	return (fill_buf(buf, s, ft_strlen(s)));
}
