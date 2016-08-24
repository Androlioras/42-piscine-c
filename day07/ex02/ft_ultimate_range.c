/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:22:04 by pribault          #+#    #+#             */
/*   Updated: 2016/08/24 08:40:13 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long	i;
	int		*array;
	long	size;
	long	a;
	long	b;

	i = 0;
	a = min;
	b = max;
	size = b - a;
	array = (int*)malloc(sizeof(int) * size);
	while (i < size && array != NULL && size <= 2147483647)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	if (array == NULL || max <= min || size > 2147483647)
	{
		*range = NULL;
		return (0);
	}
	return (size);
}
