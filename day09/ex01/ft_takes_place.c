/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:48:11 by pribault          #+#    #+#             */
/*   Updated: 2016/08/11 23:04:31 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place2(int hour, int hour2, char am_pm, char am_pm2);

void	ft_takes_place(int hour)
{
	int		hour2;
	char	am_pm;
	char	am_pm2;

	hour2 = hour + 1;
	am_pm = 'A';
	am_pm2 = 'A';
	if (hour > 12)
	{
		if (hour != 24)
			am_pm = 'P';
		hour = hour % 12;
	}
	else if (hour == 12)
		am_pm = 'P';
	if (hour2 > 12)
	{
		if (hour2 != 24)
			am_pm2 = 'P';
		hour2 = hour2 % 12;
	}
	else if (hour2 == 12)
		am_pm2 = 'P';
	ft_takes_place2(hour, hour2, am_pm, am_pm2);
}

void	ft_takes_place2(int hour, int hour2, char am_pm, char am_pm2)
{
	if (hour == 0)
		hour = 12;
	if (hour2 == 0)
		hour2 = 12;
	if (hour == 24)
		am_pm = 'A';
	if (hour2 == 24)
		am_pm2 = 'A';
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M.", hour, am_pm);
	printf(" AND %d.00 %c.M.\n", hour2, am_pm2);
}
