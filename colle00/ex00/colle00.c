/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:20:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/06 11:50:19 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_char(int x, int y, int i, int j);

void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
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

void	ft_char(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x))
	{
		ft_putchar('o');
	}
	else if ((i == 1 && j == x) || (i == y && j == 1))
	{
		ft_putchar('o');
	}
	else if (i == 1 || i == y)
	{
		ft_putchar('-');
	}
	else if (j == 1 || j == x)
	{
		ft_putchar('|');
	}
	else
		ft_putchar(' ');
}
