/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_availability.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:55:19 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 11:44:08 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_availability(char **sudoku, int x, int y, char n)
{
	int i;
	int	xzero;
	int	yzero;

	i = 1;
	while (i < 10)
	{
		xzero = 3 * (x / 3);
		yzero = (3 * ((y - 1) / 3)) + 1;
		if (n == sudoku[y][i - 1] && x != i - 1)
			return (0);
		if (n == sudoku[i][x] && y != i)
			return (0);
		if (n == sudoku[yzero + (i - 1) / 3][xzero + (i - 1) % 3] &&
				y != yzero + (i - 1) && x != xzero + (i - 1) % 3)
			return (0);
		i++;
	}
	return (1);
}
