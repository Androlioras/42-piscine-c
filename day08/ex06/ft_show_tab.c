/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 09:50:56 by pribault          #+#    #+#             */
/*   Updated: 2016/08/18 20:43:16 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	i[3];

	i[1] = 1;
	i[2] = 0;
	if (-2147483648 <= nb && nb <= 2147483647)
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

void	print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	while (par[i].str)
	{
		j = 0;
		while (par[i].str[j])
		{
			ft_putchar(par[i].str[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		print_words_tables(par[i].tab);
		i++;
	}
}
