/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:02:50 by jcaron            #+#    #+#             */
/*   Updated: 2022/12/01 12:46:18 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_x(long x)
{
	unsigned int	nb;

	if (x < 0)
	{
		nb = x;
		nb &= nb;
	}
	else
		nb = x;
	return (ft_itoa_base(nb, "0123456789abcdef"));
}