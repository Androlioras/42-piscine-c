/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 09:26:40 by pribault          #+#    #+#             */
/*   Updated: 2016/08/25 17:05:25 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int					ft_atoi(char *str);

unsigned char		reverse_bit(unsigned char octet)
{
	unsigned char	result;
	int				max;
	int				min;

	max = 128;
	min = 1;
	result = 0;
	while (max >= 1)
	{
		if (octet - max >= 0)
		{
			octet -= max;
			result += min;
		}
		max /= 2;
		min *= 2;
	}
	return (result);
}

int					main(int argc, char **argv)
{
	unsigned char	octet;

	octet = ft_atoi(argv[1]);
	printf("%d\n", reverse_bit(octet));
	return (0);
}
