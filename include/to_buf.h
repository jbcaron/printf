/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_buf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:54:02 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:29:49 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TO_BUF_H
# define TO_BUF_H

# include "ft_printf.h"

ssize_t	char_to_buf(int c, t_buffer *buf);
ssize_t	str_to_buf(char *s, t_buffer *buf);
ssize_t	dec_to_buf(int n, t_buffer *buf);
ssize_t	udec_to_buf(unsigned int n, t_buffer *buf);
ssize_t	low_hex_to_buf(unsigned int n, t_buffer *buf);
ssize_t	up_hex_to_buf(unsigned int n, t_buffer *buf);
ssize_t	ptr_to_buf(void *p, t_buffer *buf);

#endif
