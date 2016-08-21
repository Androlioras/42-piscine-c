/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:06:31 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 14:23:57 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_header.h"

void	display(char *str, int number, int count)
{
	int		*x_y;

	if (count != 1)
		ft_putstr(" || ");
	x_y = (int*)malloc(sizeof(int) * 2);
	calc_array(str, x_y);
	ft_putstr("[colle-0");
	ft_putnbr(number);
	ft_putstr("] [");
	ft_putnbr(x_y[0]);
	ft_putstr("] [");
	ft_putnbr(x_y[1]);
	ft_putstr("]");
	free(x_y);
}
