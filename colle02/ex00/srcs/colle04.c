/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 16:03:54 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

void	colle04(int x, int y, char *line)
{
	int i[2];

	i[0] = 1;
	if (x == 1 || y == 1)
	{
		i[0] = 2;
		ft_one04(x, y, i, line);
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
				ft_char04(x, y, i, line++);
				i[1]++;
			}
			i[0]++;
			*(line++) = '\n';
		}
	}
}

void	ft_char04(int x, int y, int i[2], char *line)
{
	if ((i[0] == 1 && i[1] == 1) || (i[0] == y && i[1] == x))
		*(line++) = 'A';
	else if ((i[0] == y && i[1] == 1) || (i[0] == 1 && i[1] == x))
		*(line++) = 'C';
	else if (i[0] == 1 || i[0] == y || i[1] == 1 || i[1] == x)
		*(line++) = 'B';
	else
		*(line++) = ' ';
}

void	ft_one04(int x, int y, int i[2], char *line)
{
	*(line++) = 'A';
	if (x == 1)
	{
		*(line++) = '\n';
		while (i[0] <= y - 1)
		{
			*(line++) = 'B';
			*(line++) = '\n';
			i[0]++;
		}
		if (y != 1)
			*(line++) = 'C';
	}
	else
	{
		while (i[0] <= x - 1)
		{
			*(line++) = 'B';
			i[0]++;
		}
		if (x != 1)
			*(line++) = 'C';
	}
}
