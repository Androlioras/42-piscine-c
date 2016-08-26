/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:37:38 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 22:06:21 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_list(t_list *list);

int		main(void)
{
	t_list	*begin_list;
	char	*a = "tirelipinpon";
	char	*b = "sur le";
	char	*c = "chiwawa";

	begin_list = ft_create_elem(a);
	ft_list_push_back(&begin_list, b);
	ft_list_push_back(&begin_list, c);
	print_list(begin_list);
	return (0);
}
