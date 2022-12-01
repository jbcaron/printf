/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:51:12 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 12:39:22 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define BUF_SIZE 32

typedef struct s_buf
{
	unsigned int	i;
	char			buf[BUF_SIZE];
}				t_buf;

/*
** add a character in a buffer, if the buffer is full or the character '\0'
** is send , the buffer is printing and the lengh is return
*/

int	add_to_buf(char c)
{
	static t_buf	buffer = {.id = 0};
	unsigned int	ret;

	ret = 0;
	if (c != '\0')
	{
		buffer.buf[buffer.id] = c;
		buffer.id++;
	}
	if (c == '\0' || buffer.id > BUF_SIZE)
	{
		ret = print_buf(buffer);
		buffer.id = 0;
	}
	return (ret);
}

int	print_buf (t_buf buffer)
{
	if (buffer.id == 0)
		return (0);
	write(1, buffer.buf, buffer.id)
}
