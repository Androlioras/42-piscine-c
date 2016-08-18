/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:01:41 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:06:54 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		i;
	int		min;
	int		max;
	int		*string;

	min = -10;
	max = 11;
	string = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", string[i]);
		i++;
	}
}
