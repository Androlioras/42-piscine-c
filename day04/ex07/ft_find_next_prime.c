/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 18:48:44 by pribault          #+#    #+#             */
/*   Updated: 2016/08/11 07:17:27 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int result;

	result = 0;
	if (nb <= 0)
		nb = 2;
	if (nb == 1)
		nb = 2;
	while (result != 1)
	{
		i = 2;
		result = 1;
		while (i < nb / 2)
		{
			if (nb % i == 0)
				result = 0;
			i++;
		}
		nb++;
	}
	return (--nb);
}
