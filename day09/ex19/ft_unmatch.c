/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:00:30 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 15:47:35 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int boolean;

	i = 0;
	while (i < length && boolean % 2 != 1)
	{
		j = 0;
		boolean = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
				boolean++;
			j++;
		}
		i++;
	}
	return (tab[i - 1]);
}
