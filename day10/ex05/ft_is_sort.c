/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 10:11:40 by pribault          #+#    #+#             */
/*   Updated: 2016/08/22 16:07:41 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int		i;
	int		check;

	i = 0;
	check = 0;
	while (i < length - 1)
	{
		if (check == 0)
			check = f(tab[i], tab[i + 1]);
		else
		{
			if (f(tab[i], tab[i + 1]) < 0 && check > 0)
				return (0);
			if (f(tab[i], tab[i + 1]) > 0 && check < 0)
				return (0);
		}
		i++;
	}
	return (1);
}
