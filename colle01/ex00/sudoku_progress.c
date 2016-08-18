/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_progress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:57:14 by pribault          #+#    #+#             */
/*   Updated: 2016/08/14 14:24:10 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		display_sudoku(char **sudoku);

int		check_availability(char **sudoku, int x, int y, char n);

int		sudoku_progress(char **sudoku, int x, int y, int *ptr);

void	sudoku_progress2(char **sudoku, int x, int y, int *ptr)
{
	char n;

	n = '1';
	while (n <= '9')
	{
		if (check_availability(sudoku, x, y, n))
		{
			sudoku[y][x] = n;
			sudoku_progress(sudoku, x, y, ptr);
		}
		n++;
	}
}

int		sudoku_progress(char **sudoku, int x, int y, int *ptr)
{
	while (sudoku[y][x] != '.')
	{
		if (x == 9)
			y++;
		if (x == 9)
			x = 0;
		else
			x++;
		if (y == 10)
		{
			if (*ptr == -1)
				return (display_sudoku(sudoku));
			else
			{
				(*ptr)++;
				return (1);
			}
		}
	}
	sudoku_progress2(sudoku, x, y, ptr);
	sudoku[y][x] = '.';
	return (0);
}
