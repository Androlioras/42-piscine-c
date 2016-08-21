/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 15:40:19 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

void	colle00(int x, int y, char *line)
{
	int	i[2];

	i[0] = 1;
	while (i[0] <= y)
	{
		i[1] = 1;
		while (i[1] <= x)
		{
			ft_char00(x, y, i, line++);
			i[1]++;
		}
		i[0]++;
		*(line++) = '\n';
	}
	*line = '\0';
}

void	ft_char00(int x, int y, int i[2], char *line)
{
	if ((i[0] == 1 && i[1] == 1) || (i[0] == y && i[1] == x))
	{
		*line = 'o';
	}
	else if ((i[0] == 1 && i[1] == x) || (i[0] == y && i[1] == 1))
	{
		*line = 'o';
	}
	else if (i[0] == 1 || i[0] == y)
	{
		*line = '-';
	}
	else if (i[1] == 1 || i[1] == x)
	{
		*line = '|';
	}
	else
		*line = ' ';
}
