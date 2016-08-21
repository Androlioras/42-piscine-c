/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 15:43:08 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

void	colle03(int x, int y, char *line)
{
	int i[2];

	i[0] = 1;
	while (i[0] <= y)
	{
		i[1] = 1;
		while (i[1] <= x)
		{
			ft_char03(x, y, i, line);
			line++;
			i[1]++;
		}
		i[0]++;
		*line = '\n';
		line++;
	}
	*line = '\0';
}

void	ft_char03(int x, int y, int i[2], char *line)
{
	if ((i[0] == 1 && i[1] == 1) || (i[0] == y && i[1] == 1))
		*(line++) = 'A';
	else if ((i[0] == 1 && i[1] == x) || (i[0] == y && i[1] == x))
		*(line++) = 'C';
	else if (i[0] == 1 || i[0] == y || i[1] == 1 || i[1] == x)
		*(line++) = 'B';
	else
		*(line++) = ' ';
}
