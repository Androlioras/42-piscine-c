/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:23:43 by pribault          #+#    #+#             */
/*   Updated: 2016/08/17 16:27:23 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
