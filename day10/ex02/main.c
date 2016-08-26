/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:28:51 by pribault          #+#    #+#             */
/*   Updated: 2016/08/18 22:50:05 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		ft_putnbr(int n);

int		main(void)
{
	int	tab[10] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
	int	*array;
	int	i;

	array = ft_map(tab, 10, &ft_putnbr);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}
