/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:20:23 by pribault          #+#    #+#             */
/*   Updated: 2016/08/16 20:17:28 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		convert_to_number(char *nbr, char *base_from)
{
	int		base;

	size = size(nbr);
	if (size > 1)
		number = 10 * ft_to_number(nbr + size - 1, base_from, base_to) + convert_to_number(nbr, base_from);
	else if (size == 1)
		number = convert_to_number(nbr, base_from);

}

int		size(char *string)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (string[i])
	{
		i++;
		size++;
	}
	return (size);
}

char	convert_to_char(int nbr, char *base_to)
{
	
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;

	number = convert_to_number(nbr, base_from);
	*nbr = convert_to_char(number, base_to);
	return (nbr);
}
