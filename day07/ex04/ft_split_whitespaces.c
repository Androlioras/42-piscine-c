/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 10:30:38 by pribault          #+#    #+#             */
/*   Updated: 2016/08/16 17:24:28 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**fill_array(char **array, char *str, int i, int l);

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		l;
	char	**array;

	i = 0;
	l = 0;
	while (str[i])
	{
		while (((str[i] < 9 || str[i] > 11) && str[i] != ' ' && str[i] != '\0'))
			i++;
		while ((str[i] > 8 && str[i] < 12) || str[i] == ' ')
			i++;
		l++;
	}
	array = malloc(sizeof(char **) * (l + 1));
	i = 0;
	l = -1;
	array = fill_array(array, str, i, l);
	return (array);
}

char	**fill_array(char **array, char *str, int j, int l)
{
	int		i[4];

	while (str[j])
	{
		i[3] = j;
		while ((str[j] < 9 || str[j] > 11) && str[j] != ' ' \
			&& str[j] != '\0')
			j++;
		if (i[3] != j)
		{
			l++;
			array[l] = malloc(sizeof(char *) * (j - i[3]));
			i[1] = 0;
			while (i[3] + i[1] != j)
			{
				array[l][i[1]] = str[i[3] + i[1]];
				i[1]++;
			}
			array[l][i[1]] = '\0';
		}
		while ((str[j] > 8 && str[j] < 12) || str[j] == ' ')
			j++;
	}
	array[l + 1] = 0;
	return (array);
}
