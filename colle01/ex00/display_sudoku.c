/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:51:34 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 11:47:57 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error(void);

int		check_availability(char **sudoku, int x, int y, char n);

int		check_solution(char **sudoku)
{
	int i;
	int j;
	int	bool;

	i = 1;
	bool = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (check_availability(sudoku, j, i, sudoku[i][j]) == 0)
				bool = 0;
			j++;
		}
		i++;
	}
	return (bool);
}

int		display_sudoku(char **sudoku)
{
	int		i;
	int		j;

	if (check_solution(sudoku) == 1)
	{
		i = 1;
		while (i < 10)
		{
			j = 0;
			while (j < 9)
			{
				write(1, &sudoku[i][j], 1);
				if (j != 8)
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (1);
	}
	else
		error();
	return (0);
}
