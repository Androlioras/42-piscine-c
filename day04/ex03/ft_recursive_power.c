/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 16:45:34 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 16:55:18 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int nbr;

	nbr = nb;
	if (power > 0)
	{
		nbr = nb * ft_recursive_power(nb, power - 1);
	}
	else if (power == 0)
		nbr = 1;
	else
		nbr = 0;
	return (nbr);
}
