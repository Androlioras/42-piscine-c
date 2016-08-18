/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 17:13:27 by pribault          #+#    #+#             */
/*   Updated: 2016/08/10 08:45:51 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, int n)
{
	int i;
	int result;
	int boolean;

	i = 0;
	boolean = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && boolean == 0 && i < n)
	{
		if (s1[i] < s2[i])
			boolean = 1;
		else if (s1[i] > s2[i])
			boolean = 1;
		i++;
	}
	if (boolean == 1)
		result = s1[i - 1] - s2[i - 1];
	else if (s1[i] == '\0' && s2[i] == '\0')
		result = 0;
	else if (s1[i] == '\0')
		result = -s2[i];
	else if (s2[i] == '\0')
		result = s1[i];
	else
		result = 0;
	return (result);
}
