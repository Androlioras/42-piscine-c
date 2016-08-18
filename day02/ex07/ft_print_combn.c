/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 13:58:23 by pribault          #+#    #+#             */
/*   Updated: 2016/08/10 16:54:16 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int nb, int power)
{
	char c;

	while (power >= 1)
	{
		c = '0';
		while (nb >= power)
		{
			nb -= power;
			c++;
		}
		ft_putchar(c);
		power /= 10;
	}
}

void	ft_print_combn(int n)
{
	int power;
	int i;

	power = 1;
	while (n != 1)
	{
		power*= 10;
		n--;
	}
	i = 1;
	while (i < 10 * power)
	{
		if (i != 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		print(i, power);
		i++;
	}
}
