/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:19:04 by pribault          #+#    #+#             */
/*   Updated: 2016/08/05 09:12:01 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
