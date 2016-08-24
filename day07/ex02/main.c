/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:47:26 by pribault          #+#    #+#             */
/*   Updated: 2016/08/24 08:37:52 by pribault         ###   ########.fr       */
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

	range = (int**)malloc(sizeof(int*) * 1);
	min = 42;
	max = 43;
	size = ft_ultimate_range(range, min, max);
	i = 0;
	printf("%p %d\n", *range, size);
	if (!range)
		printf("NULL");
	/*while (i < max - min && range != NULL)
	{
		printf("%d ", range[0][i]);
		i++;
	}*/
	free(range);
	return (0);
}
