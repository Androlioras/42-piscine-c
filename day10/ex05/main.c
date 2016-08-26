/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:33:24 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 16:07:29 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		test(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int		tab[] = {17 , 13 , 13 , 7 , 5 , -8};

	printf("%d\n", ft_is_sort(tab, 6, test));
}
