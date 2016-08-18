/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:07:30 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:22:08 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int		**range;
	int		min;
	int		max;
	int		size;
	int		i;

	range = malloc(sizeof(int*) * 1);
	min = -10;
	max = 11;
	size = ft_ultimate_range(range, min, max);
	i = 0;
	printf("%d ", size);
	while (i < max - min)
	{
		printf("%d ", range[0][i]);
		i++;
	}
	return (0);
}
