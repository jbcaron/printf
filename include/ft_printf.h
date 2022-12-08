/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:29:26 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:45:40 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include "ft_buffer.h"
# include "ft_strlen.h"
# include "put_to.h"
# include "to_buf.h"

int		ft_printf(const char *format, ...);
ssize_t	print_format(const char *str, va_list args, t_buffer *buf);
ssize_t	ft_arg(char c, va_list args, t_buffer *buf);
int		is_arg(char c);

#endif
