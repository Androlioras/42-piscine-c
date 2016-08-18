/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 12:17:07 by pribault          #+#    #+#             */
/*   Updated: 2016/08/10 12:20:05 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			result = 0;
		i++;
	}
	return (result);
}