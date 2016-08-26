/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 09:47:08 by pribault          #+#    #+#             */
/*   Updated: 2016/08/25 17:08:24 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_atoi(char *str);

int			reverse_bit(int octet)
{
	int		result;
	int		max;
	int		min;

	max = 10000000;
	min = 1;
	result = 0;
	while (max >= 1)
	{
		if (octet - max >= 0)
		{
			octet -= max;
			result += min;
		}
		max /= 10;
		min *= 10;
	}
	return (result);
}

int			main(int argc, char **argv)
{
	int		octet;

	octet = ft_atoi(argv[1]);
	printf("%d\n", reverse_bit(octet));
	return (0);
}
