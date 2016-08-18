/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 00:20:11 by pribault          #+#    #+#             */
/*   Updated: 2016/08/10 16:12:54 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(char n1, char n2, char n3);

void	ft_print_comb(void);

void	print(char n1, char n2, char n3)
{
	if (n1 < n2 && n2 < n3)
	{
		if (n1 != '0' || n2 != '1' || n3 != '2')
		{
			ft_putchar(*",");
			ft_putchar(*" ");
		}
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
	}
}

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				print(n1, n2, n3);
				n3++;
			}
			n3 = '0';
			n2++;
		}
		n2 = '0';
		n1++;
	}
}
