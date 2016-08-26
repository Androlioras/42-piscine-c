/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:48:25 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 22:19:59 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int(*f)(char*));

int		ft_test(char *n)
{
	int		result;

	if (n == 'a')
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	**array;

	array = (char**)malloc(sizeof(char*) * 2);
	array[0] = (char*)malloc(sizeof(char) * 10);
	array[0] = "bcdefghia";
	array[1] = NULL;
	printf("%d", ft_any(array, &ft_test));
	free(array);
	return (0);
}
