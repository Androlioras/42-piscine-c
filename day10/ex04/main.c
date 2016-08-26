/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:48:25 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 10:08:41 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int(*f)(char*));

int		ft_test(char *n)
{
	if (n[0] == 'a')
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	**array;

	array = (char**)malloc(sizeof(char*) * 3);
	array[0] = (char*)malloc(sizeof(char) * 10);
	array[1] = (char*)malloc(sizeof(char) * 10);
	array[0] = "acdefghia";
	array[1] = "ajofeofkw";
	array[2] = NULL;
	printf("%d", ft_count_if(array, &ft_test));
	free(array);
	return (0);
}
