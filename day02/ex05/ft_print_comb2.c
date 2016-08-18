/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 09:50:12 by pribault          #+#    #+#             */
/*   Updated: 2016/08/08 10:20:40 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	print(char c, char d, char e, char f);

void	ft_print_comb2(void);

char	print(char c, char d, char e, char f)
{
	while (f <= '9')
	{
		if (c < e || (d < f && c == e))
		{
			if (c != '0' || d != '0' || e != '0' || f != '1')
			{
				ft_putchar(',');
				ft_putchar(*" ");
			}
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(*" ");
			ft_putchar(e);
			ft_putchar(f);
		}
		f++;
	}
	return (f = '0');
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				n4 = print(n1, n2, n3, n4);
				n3++;
			}
			n2++;
			n3 = '0';
			n4 = '0';
		}
		n1++;
		n2 = '0';
	}
}
