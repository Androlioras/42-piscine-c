/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 16:11:25 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 15:47:50 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	int		(function[5])(int a, int b);

	result = 0;
	function[0] = &addition;
	function[1] = &substraction;
	function[2] = &multiplication;
	function[3] = &division;
	function[4] = &modulo;
	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		result = result_calc(a, b, function, argv);
	}
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}

int		result_calc(int a, int b, int(*f)(int, int), char **argv)
{
	int		result;

	if (argv[2][0] == 43)
		result = (f[0])(a, b);
	if (argv[2][0] == 45)
		result = (f[1])(a, b);
	if (argv[2][0] == 42)
		result = (f[2])(a, b);
	if (argv[2][0] == 47)
		result = (f[3])(a, b);
	if (argv[2][0] == 37)
		result = (f[4])(a, b);
	return (result);
}
