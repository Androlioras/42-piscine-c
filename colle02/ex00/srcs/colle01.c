/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 16:02:15 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

void	colle01(int x, int y, char *line)
{
	int i[2];

	i[0] = 1;
	if (x == 1 || y == 1)
	{
		i[0] = 2;
		ft_one01(x, y, i, line);
		if (!(x == 1 && y == 1))
			*(line++) = '\n';
	}
	else
	{
		while (i[0] <= y)
		{
			i[1] = 1;
			while (i[1] <= x)
			{
				ft_char01(x, y, i, line++);
				i[1]++;
			}
			i[0]++;
			*(line++) = '\n';
		}
	}
}

void	ft_char01(int x, int y, int i[2], char *line)
{
	if ((i[0] == 1 && i[1] == 1) || (i[0] == y && i[1] == x))
		*(line++) = '/';
	else if ((i[0] == y && i[1] == 1) || (i[0] == 1 && i[1] == x))
		*(line++) = 92;
	else if (i[0] == 1 || i[0] == y || i[1] == 1 || i[1] == x)
		*(line++) = '*';
	else
		*(line++) = ' ';
}

void	ft_one01(int x, int y, int i[2], char *line)
{
	*(line++) = '/';
	if (x == 1)
	{
		*(line++) = '\n';
		while (i[0] <= y - 1)
		{
			*(line++) = '*';
			*(line++) = '\n';
			i[0]++;
		}
		if (y != 1)
			*(line++) = 92;
	}
	else
	{
		while (i[0] <= x - 1)
		{
			*(line++) = '*';
			i[0]++;
		}
		if (x != 1)
			*(line++) = 92;
	}
}
