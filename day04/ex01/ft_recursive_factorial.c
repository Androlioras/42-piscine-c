/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:50:47 by pribault          #+#    #+#             */
/*   Updated: 2016/08/08 10:53:20 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
	{
		if (nb == 1)
			return (nb);
		else
			nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
