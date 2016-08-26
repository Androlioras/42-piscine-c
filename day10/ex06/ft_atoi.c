/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:41:26 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 19:48:07 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int negative;
	int boolean;

	i = 0;
	nb = 0;
	negative = 1;
	boolean = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		negative = 44 - str[i];
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * negative);
}
