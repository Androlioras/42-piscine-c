/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 22:50:20 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 09:21:16 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_calculation(int lenght, int size);

int		ft_print_floors(int lenght, int chars, int lines);

void	sastantua(int size);

void	door(int lenght, int chars, int lines, int size);

void	door_2(int door_size, int lines, int i, int stars);

void	ft_print_calculation(int lenght, int size)
{
	int tab[6];

	tab[0] = 3;
	tab[1] = 3;
	tab[4] = 4;
	tab[3] = 1;
	while (tab[3] < size)
	{
		tab[0] = ft_print_floors(lenght, tab[0], tab[1]);
		tab[0] += tab[4];
		if (tab[1] % 2 == 0)
		{
			tab[4] += 2;
		}
		tab[3]++;
		tab[1]++;
		if (tab[3] == size)
		{
			door(lenght, tab[0], tab[1], size);
		}
	}
}

int		ft_print_floors(int lenght, int chars, int lines)
{
	int tab[3];

	tab[0] = 1;
	while (tab[0] <= lines)
	{
		tab[2] = (lenght - chars) / 2;
		tab[1] = 1;
		while (tab[1] <= tab[2])
		{
			ft_putchar(' ');
			tab[1]++;
		}
		tab[1] = 1;
		ft_putchar('/');
		while (tab[1] <= chars - 2)
		{
			ft_putchar('*');
			tab[1]++;
		}
		ft_putchar(92);
		ft_putchar('\n');
		chars += 2;
		tab[0]++;
	}
	return (chars);
}

void	door(int lenght, int chars, int lines, int size)
{
	int tab[7];

	tab[3] = size;
	tab[0] = 1;
	if (size % 2 == 0)
		tab[3] -= 1;
	chars = chars - tab[3];
	while (tab[0] <= lines)
	{
		tab[6] = (lenght - chars - tab[3]) / 2;
		tab[4] = (chars - 2) / 2;
		tab[1] = 1;
		while (tab[1] <= tab[6])
		{
			ft_putchar(' ');
			tab[1]++;
		}
		tab[1] = 1;
		ft_putchar('/');
		door_2(tab[3], lines, tab[0], tab[4]);
		ft_putchar(92);
		ft_putchar('\n');
		chars += 2;
		tab[0]++;
	}
}

void	door_2(int d_s, int lines, int i, int stars)
{
	int n;

	n = 1;
	while (n <= stars)
	{
		ft_putchar('*');
		n++;
	}
	n = 1;
	while (n <= d_s)
	{
		if (lines - i >= d_s)
			ft_putchar('*');
		else	if (n == d_s - 1 && i == lines - d_s / 2 && d_s >= 5)
			ft_putchar('$');
		else
			ft_putchar('|');
		n++;
	}
	n = 1;
	while (n <= stars)
	{
		ft_putchar('*');
		n++;
	}
}

void	sastantua(int size)
{
	int tab[3];

	tab[0] = -3;
	tab[2] = 1;
	tab[1] = 10;
	while (tab[2] <= size)
	{
		tab[0] += tab[1];
		if (tab[2] % 2 == 1 && tab[2] != 1)
		{
			tab[1] += 2;
		}
		tab[1] += 2;
		tab[2]++;
	}
	ft_print_calculation(tab[0], size);
}
