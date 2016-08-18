/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:29:02 by pribault          #+#    #+#             */
/*   Updated: 2016/08/08 10:53:57 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	if (nb < 0 || nb > 12)
		factorial = 0;
	return (factorial);
}
