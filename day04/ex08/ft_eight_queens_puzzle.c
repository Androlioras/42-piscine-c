/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 00:10:15 by pribault          #+#    #+#             */
/*   Updated: 2016/08/08 09:23:49 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_queens(int queens[8], int n)
{
	int stat;
	int i;

	i = 1;
	while (i <= 8)
	{
		if ()
		{
			queens[n] = i;
			result++;
			if (n != 7)
				result =  check_queens(queens[], n + 1);
		}
	}
	return stat;
}

int	ft_eight_queens_puzzle(void)
{
	int queens[8];
	int n;

	queens = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
	n = 0;
	check_queens(queens[], n);
}
