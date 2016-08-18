/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:04:53 by pribault          #+#    #+#             */
/*   Updated: 2016/08/08 18:14:50 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int nbr;

	if (index > 2)
		nbr = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	else if (index == 2)
		nbr = 1;
	else if (index == 1)
		nbr = 1;
	else if (index == 0)
		nbr = 0;
	else
		nbr = -1;
	return (nbr);
}
