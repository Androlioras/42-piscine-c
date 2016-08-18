/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/06 10:41:58 by pribault         ###   ########.fr       */
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
		ft_putchar('/');
	}
	else if ((i == y && j == 1) || (i == 1 && j == x))
	{
		ft_putchar(92);
	}
	else if (i == 1 || i == y || j == 1 || j == x)
	{
		ft_putchar('*');
	}
	else
		ft_putchar(' ');
}

void	ft_one(int x, int y, int i)
{
	ft_putchar('/');
	if (x == 1)
	{
		ft_putchar('\n');
		while (i <= y - 1)
		{
			ft_putchar('*');
			ft_putchar('\n');
			i++;
		}
		if (y != 1)
			ft_putchar(92);
	}
	else
	{
		while (i <= x - 1)
		{
			ft_putchar('*');
			i++;
		}
		if (x != 1)
			ft_putchar(92);
	}
}
