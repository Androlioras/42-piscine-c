/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 22:50:20 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 09:17:44 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_calculation(int lenght, int size);

int		ft_print_floors(int lenght, int chars, int lines);

void	sastantua(int size);

void	ft_space(int spaces);

void	door(int lenght, int chars, int lines, int size);

void	ft_print_calculation(int lenght, int size)
{
	int chars;
	int lines;
	int line;
	int i;
	int char_addition;

	chars = 3;
	lines = 3;
	char_addition = 4;
	i = 1;
	while (i < size)
	{
		chars = ft_print_floors(lenght, chars, lines);
		chars += char_addition;
		if (lines % 2 == 0)
		{
			char_addition += 2;
		}
		i++;
		lines++;
		if (i == size)
		{
			door(lenght, chars, lines, size);
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
	int door_size;
	int stars;
	int jump;
	int spaces;
	int tab[2];

	door_size = size;
	jump = 2;
	tab[0] = 1;
	if (size % 2 == 0)
	{
		door_size -= 1;
		jump++;
	}
	chars = chars - door_size;
	while (tab[0] <= lines)
	{
		spaces = (lenght - chars - door_size) / 2;
		stars = (chars - 2) / 2;
		tab[1] = 1;
		while (tab[1] <= spaces)
		{
			ft_putchar(' ');
			tab[1]++;
		}
		tab[1] = 1;
		ft_putchar('/');
		while (tab[1] <= stars)
		{
			ft_putchar('*');
			tab[1]++;
		}
		tab[1] = 1;
		while (tab[1] <=  door_size)
		{
			if (lines - tab[0] >= door_size)
			{
				ft_putchar('*');
			}
			else
			{
				if ((tab[1] != door_size - 1) || (tab[0] != lines - door_size + (door_size / 2) + 1) || (size < 5))
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar('$');
				}
			}
			tab[1]++;
		}
		tab[1] = 1;
		while (tab[1] <= stars)
		{
			ft_putchar('*');
			tab[1]++;
		}
		ft_putchar(92);
		ft_putchar('\n');
		chars += 2;
		tab[0]++;
	}
}

void	sastantua(int size)
{
	int lenght;
	int n;
	int i;

	lenght = -3;
	i = 1;
	n = 10;
	while (i <= size)
	{
		lenght += n;
		if (i % 2 == 1 && i != 1)
		{
			n += 2;
		}
		n += 2;
		i++;
	}
	ft_print_calculation(lenght, size);
}
