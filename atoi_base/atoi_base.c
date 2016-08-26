/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:27:13 by pribault          #+#    #+#             */
/*   Updated: 2016/08/25 17:29:31 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i[3];

	i[1] = 1;
	i[2] = 0;
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			if (nb == -2147483648)
				i[2] = 1;
			nb = -nb - i[2];
		}
		i[0] = nb;
		while (nb / i[1] > 9)
			i[1] *= 10;
		while (i[1] != 1)
		{
			nb = i[0];
			ft_putchar(48 + nb / i[1]);
			i[0] = i[0] - (nb / i[1]) * i[1];
			i[1] /= 10;
		}
		ft_putchar(i[0] + 48 + i[2]);
	}
}

int		calc(char c, char *str)
{
	int		range;

	range = 0;
	while (str[range] != c)
		range++;
	return (range);
}

int		match(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		i;
	int		nb;
	int		size;
	int		negative;
	int		boolean;

	i = 0;
	nb = 0;
	size = 0;
	negative = 1;
	boolean = 0;
	while (argv[1][size])
		size++;
	while (!(match(argv[2][i], argv[1]) || argv[2][i] != '-' || argv[2][i] != '+'))
		i++;
	if (argv[2][i] == '+' || argv[2][i] == '-')
	{
		negative = 44 - argv[2][i];
		i++;
	}
	while (match(argv[2][i], argv[1]))
	{
		nb = nb * size + calc(argv[2][i], argv[1]);
		i++;
	}
	ft_putnbr(nb * negative);
	return (0);
}
