/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_to.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:52:39 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/08 14:25:14 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_TO_H
# define PUT_TO_H

# include "ft_printf.h"

ssize_t	put_to_hex(unsigned long n, const char *hex_base, t_buffer *buf);
ssize_t	put_to_dec(long n, t_buffer *buf);

#endif
