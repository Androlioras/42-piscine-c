/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 13:42:42 by pribault          #+#    #+#             */
/*   Updated: 2016/08/11 15:07:17 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i[4];

	i[3] = 0;
	i[0] = 0;
	while (str[i[0]] != '\0' && i[3] != 1)
	{
		i[3] = 1;
		i[1] = 0;
		i[2] = i[0];
		while (to_find[i[1]] != '\0')
		{
			if (to_find[i[1]] != str[i[2]])
				i[3] = 0;
			i[1]++;
			i[2]++;
		}
		i[0]++;
	}
	if (str[i[0]] != '\0')
		i[0]--;
	else
		return (0);
	str += i[0];
	return (str);
}