/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:26:43 by jcaron            #+#    #+#             */
/*   Updated: 2022/11/21 19:05:48 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa_base(long n, const char *base);

int	main(void)
{
	char	*str;
	char	hex_base[] = "0123456789abcdef";
	int		nb;
	unsigned int	new_nb;

	nb = -67;
	new_nb = nb;
	new_nb &= new_nb;
	str = ft_itoa_base(new_nb, hex_base);
	printf("%x | %s\n", nb, str);
	free(str);
	return (0);
}
