/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:05:21 by pribault          #+#    #+#             */
/*   Updated: 2016/08/10 11:48:06 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			if (i == 0)
				str[i] -= 32;
			else if (str[i - 1] < 48 || str[i - 1] > 122)
				str[i] -= 32;
			else if (str[i - 1] < 97 && str[i - 1] > 90)
				str[i] -= 32;
		}
		else if (str[i] <= 90 && str[i] >= 65)
			if (str[i - 1] >= 48 && str[i - 1] <= 122)
			{
				if (str[i - 1] < 91 || str[i - 1] > 96)
					str[i] += 32;
				if (str[i - 1] > 47 && str[i - 1] < 58)
					str[i] += 32;
			}
		i++;
	}
	return (str);
}
