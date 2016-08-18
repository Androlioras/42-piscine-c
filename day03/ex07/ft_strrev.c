/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 11:24:48 by pribault          #+#    #+#             */
/*   Updated: 2016/08/07 23:14:26 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int save;
	char *c;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	save = j;
	while (j >= 0)
	{
		*c = str[j];
		c++;
		j--;
	}
	return (c);
}