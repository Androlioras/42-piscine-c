/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 10:29:45 by pribault          #+#    #+#             */
/*   Updated: 2016/08/18 20:45:43 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_show_tab(struct s_stock_par *par);

char	*ft_strdup(char *src)
{
	int			i;
	char		*array;

	i = 0;
	while (src[i])
		i++;
	array = malloc(sizeof(char*) * (i + 1));
	i = 0;
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_param	*array;
	int		i;
	int		size;

	i = 0;
	array = malloc(sizeof(t_stock_param) * ac);
	while (i < ac)
	{
		size = 0;
		while (av[i][size])
			size++;
		array[i].size_param = size;
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		array[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
