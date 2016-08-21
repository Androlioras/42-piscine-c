/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:41:58 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 21:05:31 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	int		i;
	int		len;
	int		test;
	char	*line;
	char	*temp;
	char	**array;

	len = 0;
	line = (char*)malloc(sizeof(char) * len + 2);
	while (read(0, &line[len], 1))
	{
		line[len + 1] = '\0';
		temp = line;
		len++;
		line = (char*)malloc(sizeof(char) * len + 2);
		i = -1;
		while (temp[++i])
			line[i] = temp[i];
		free(temp);
	}
	line[len] = '\0';
	check(line);
	return (0);
}

void	check(char *line)
{
	int		n;
	int		count;
	char	*str;

	n = 0;
	count = 0;
	while (n < 5)
	{
		str = generate_string(line, n);
		if (!ft_strcmp(line, str))
		{
			count++;
			display(str, n, count);
		}
		free(str);
		n++;
	}
	if (count != 0)
		ft_putstr("\n");
	else
		error();
	free(line);
}

char	*generate_string(char *line, int n)
{
	char	*str;
	int		*x_y;

	x_y = (int*)malloc(sizeof(int) * 2);
	calc_array(line, x_y);
	str = (char*)malloc(sizeof(char) * (x_y[0] * x_y[1] + x_y[1] + 1));
	if (n == 0)
		colle00(x_y[0], x_y[1], str);
	if (n == 1)
		colle01(x_y[0], x_y[1], str);
	if (n == 2)
		colle02(x_y[0], x_y[1], str);
	if (n == 3)
		colle03(x_y[0], x_y[1], str);
	if (n == 4)
		colle04(x_y[0], x_y[1], str);
	return (str);
}

void	calc_array(char *str, int *x_y)
{
	int		i;

	i = 0;
	x_y[0] = 0;
	x_y[1] = 0;
	while (str[i] != '\0')
	{
		x_y[1]++;
		while (str[i] != '\n')
		{
			if (x_y[1] == 1)
				x_y[0]++;
			i++;
		}
		i++;
	}
}

void	error(void)
{
	ft_putstr(TIRELIPINPON_SUR_LE_CHIWAWA);
	ft_putchar('\n');
}
