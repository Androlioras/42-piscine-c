/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:46:56 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 16:38:42 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int save_nb;

	save_nb = nb;
	if (power > 0)
	{
		i = 2;
		while (i <= power)
		{
			nb *= save_nb;
			i++;
		}
	}
	else if (power == 0)
		nb = 1;
	else
		nb = 0;
	return (nb);
}
