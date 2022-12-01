/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:15:00 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 11:26:25 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	if (!str)
		return (0);
	while (string[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dst, const char *src)
{
	unsigned int	i;

	if (!src | !dst)
		return (dst);
	len_src = ft_strlen(src);
	while (dst)
		dst++;
	while (src[i])
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*str_nill(void)
{
	char	*str;

	str = calloc (sizeof(*char) * 7);
	if (str)
		return (NULL);
	ft_strcat(str, "(nill)");
	return (str);
}
