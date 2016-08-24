/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:43:20 by pribault          #+#    #+#             */
/*   Updated: 2016/08/24 09:45:17 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long	i;
	int		*array;
	long	a;
	long	b;
	long	size;

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
	if (max <= min || size > 2147483647)
		array = NULL;
	return (array);
}
