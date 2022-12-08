/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:32:46 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 15:19:01 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BUFFER_H
# define FT_BUFFER_H

# define BUF_SIZE 32

typedef struct s_buffer
{
	size_t	id;
	size_t	print_count;
	char	data[BUF_SIZE];
}	t_buffer;

ssize_t	fill_buf(t_buffer *buf, const char *str, size_t len);
ssize_t	empty_buf(t_buffer *buf);
void	init_buf(t_buffer *buf);

#endif
