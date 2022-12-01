/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:29:26 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 13:52:31 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);

char	*ft_cpy_str(char **str);
char	*ft_c(char c);
char	*ft_d(int d);
char	*ft_i(int i);
char	*ft_p(void *p);
char	*ft_s(char *s);
char	*ft_u(unsigned int u);
char	*ft_X(long x);
char	*ft_x(long x);

char	*get_next(char **str, va_list args);
char	ft_arg(char c, va_list args);
int		print_all(char **tab);
char	*join_tab(char **tab);
void	free_tab(char **tab);
unsigned int	count_args(const char *str);
int		is_arg(char c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa_base(long n, const char *base);

#endif