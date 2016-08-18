/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:15:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/16 13:28:38 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		sudoku_progress(char **sudoku, int x, int y, int *ptr);

void	error(void)
{
	write(1, "Erreur\n", 7);
}

int		main2(int argc, char **argv)
{
	int x;
	int y;
	int boolean2;

	x = 0;
	boolean2 = 1;
	while (x < 10 && argc == 10)
	{
		y = 1;
		while (y < 10)
		{
			if (((argv[y][x] < '1' || argv[y][x] > '9') && argv[y][x] != '.'\
				&& x != 9) || (x == 9 && argv[y][x] != '\0'))
				boolean2 = 0;
			y++;
		}
		x++;
	}
	return (boolean2);
}

int		main(int argc, char **argv)
{
	int *ptr;
	int	boolean;
	int boolean2;

	boolean = 0;
	ptr = &boolean;
	boolean2 = main2(argc, argv);
	if (boolean2 == 1 && argc == 10)
		sudoku_progress(argv, 0, 1, ptr);
	if (*ptr == 1 && boolean2 == 1)
	{
		boolean = -1;
		sudoku_progress(argv, 0, 1, ptr);
	}
	else
		error();
	return (0);
}
