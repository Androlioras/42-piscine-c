/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:47:51 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 15:34:34 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

int		addition(int a, int b)
{
	return (a + b);
}

int		substraction(int a, int b)
{
	return (a - b);
}

int		multiplication(int a, int b)
{
	write(1, "t", 1);
	return (a * b);
}

int		division(int a, int b)
{
	return (a / b);
}

int		modulo(int a, int b)
{
	return (a - ((a / b) * b));
}
