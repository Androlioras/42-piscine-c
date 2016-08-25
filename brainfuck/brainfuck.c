/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 10:07:58 by pribault          #+#    #+#             */
/*   Updated: 2016/08/25 12:21:40 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			forward(char *str, int i)
{
	int		n;

	n = 0;
	i++;
	while (str[i] != ']' || n != 0)
	{
		if (str[i] == '[')
			n++;
		if (str[i] == ']')
			n--;
		i++;
	}
	return (i);
}

int			backward(char *str, int i)
{
	int		n;

	n = 0;
	i--;
	while (str[i] != '[' || n != 0)
	{
		if (str[i] == ']')
			n++;
		if (str[i] == '[')
			n--;
		i--;
	}
	return (i);
}

void		brainfuck(char *str)
{
	char	*cells;
	int		i;
	int		j;

	cells = (char*)malloc(sizeof(char) * 30000);
	i = 0;
	j = 0;
	while (str[i] && cells != NULL)
	{
		if (str[i] == '<' || str[i] == '>')
			j += str[i] - 61;
		else if (str[i] == '-' || str[i] == '+')
			cells[j] += (44 - str[i]);
		else if (str[i] == '[' && cells[j] == 0)
			i = forward(str, i);
		else if (str[i] == ']' && cells[j] != 0)
			i = backward(str, i);
		else if (str[i] == '.')
			ft_putchar(cells[j]);
		i++;
	}
	free(cells);
}

int			main(int argc, char **argv)
{
	brainfuck(argv[1]);
	return (0);
}
