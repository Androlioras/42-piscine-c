/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:36:09 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 16:20:28 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	long	power;
	long	v;
	int		binary;

	power = 1;
	v = value;
	binary = 0;
	if (v >= 0)
	{
		while (power * 2 <= v)
			power *= 2;
		while (v != 0)
		{
			if (v - power >= 0)
			{
				v -= power;
				binary++;
			}
			power /= 2;
		}
	}
	return (binary);
}
