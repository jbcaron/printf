/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_count_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:24:44 by jcaron            #+#    #+#             */
/*   Updated: 2022/11/21 19:27:16 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	count_str(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", count_str(argv[1]));
	return (0);
}
