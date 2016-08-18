/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 19:26:32 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:23:37 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*fill_string(int argc, char **argv, char *string)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			string[k] = argv[i][j];
			j++;
			k++;
		}
		i++;
		if (i < argc)
		{
			string[k] = '\n';
			k++;
		}
	}
	string[k] = '\0';
	return (string);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*string;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
		}
		size += j + 1;
		i++;
	}
	string = malloc(sizeof(char) * size);
	return (fill_string(argc, argv, string));
}
