/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:39:20 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 14:54:24 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_join(char **tab, char *sep);

char	 ft_strcat(char *dest, char *src, char *sep);

int		main(int argc, char **argv)
{
	printf("%s\n", ft_join(argv, "test"));
	return (0);
}
