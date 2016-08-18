/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:22:04 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:21:23 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	int		size;
	int		i;

	if (max > min)
	{
		array = malloc(max - min);
		i = 0;
		size = max - min;
		while (i < max - min)
		{
			array[i] = i + min;
			i++;
		}
	}
	else
	{
		size = 0;
		array = 0;
	}
	*range = array;
	return (size);
}
