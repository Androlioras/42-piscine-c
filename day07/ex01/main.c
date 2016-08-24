/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:01:41 by pribault          #+#    #+#             */
/*   Updated: 2016/08/24 09:45:37 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int		i;
	int		min;
	int		max;
	int		*string;

	min = -1;
	max = 2147483647;
	string = ft_range(min, max);
	i = 0;
	printf("%p\n", string);
	/*while (i < max - min && string != NULL)
	{
		printf("%d ", string[i]);
		i++;
	}*/
	free(string);
}
