/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/06 11:02:05 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_char(int x, int y, int i, int j);

void	ft_one(int x, int y, int i);

void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	if (x == 1 || y == 1)
	{
		i = 2;
		ft_one(x, y, i);
		if (!(x == 1 && y == 1))
			ft_putchar('\n');
	}
	else
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				ft_char(x, y, i, j);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}

void	ft_char(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x))
	{
		ft_putchar('A');
	}
	else if ((i == y && j == 1) || (i == 1 && j == x))
	{
		ft_putchar('C');
	}
	else if (i == 1 || i == y || j == 1 || j == x)
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	ft_one(int x, int y, int i)
{
	ft_putchar('A');
	if (x == 1)
	{
		ft_putchar('\n');
		while (i <= y - 1)
		{
			ft_putchar('B');
			ft_putchar('\n');
			i++;
		}
		if (y != 1)
			ft_putchar('C');
	}
	else
	{
		while (i <= x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x != 1)
			ft_putchar('C');
	}
}
