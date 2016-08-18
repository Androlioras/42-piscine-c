/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:43:20 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:06:36 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		i;

	if (max > min)
	{
		array = malloc(max - min);
		i = 0;
		while (i < max - min)
		{
			array[i] = min + i;
			i++;
		}
	}
	else
		array = 0;
	return (array);
}
