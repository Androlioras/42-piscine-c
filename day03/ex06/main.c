/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:20:05 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 14:53:07 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char *str;
	char i;

	str = "loooooooooooooooooooooooooooong";
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
