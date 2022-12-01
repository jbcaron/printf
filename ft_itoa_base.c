/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:55:29 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 13:31:07 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			isbase(const char *base);
static unsigned int	nbr_len(long n, unsigned int size_base);

char	*ft_itoa_base(long n, const char *base)
{
	unsigned int	size_base;
	unsigned int	i;
	char			*str;

	size_base = isbase(base);
	if (size_base < 2)
		return (NULL);
	i = nbr_len(n, size_base);
	str = malloc(sizeof(*str) * i);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = base[0];
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	i--;
	while (n)
	{
		str[i] = base[n % size_base];
		n /= size_base;
		i--;
	}
	return (str);
}

/**
 * @brief { return the lengh of a base or 0 if it's not a base }
 **/

static int	isbase(const char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0 ;
		while (base[j] != '\0')
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

static unsigned int	nbr_len(long n, unsigned int size_base)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n)
	{
		n /= size_base;
		i++;
	}
	return (i);
}
