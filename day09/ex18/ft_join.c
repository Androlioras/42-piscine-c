/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:45:30 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 14:57:34 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, char *sep);

char	*ft_join(char **tab, char *sep)
{
	int i;

	i = 1;
	while (tab[i] && tab[i + 1])
	{
		ft_strcat(tab[i], tab[i + 1], sep);
		i++;
	}
	return (tab[1]);
}

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (sep[k])
	{
		dest[i] = sep[k];
		i++;
		k++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
