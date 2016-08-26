/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:21:03 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 22:36:41 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list);
void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*begin_list;
	char	*a = "onche";
	char	*b = ":hap:";
	char	*c = "ondulay";
	char	*d = "je suis une structuuuuuuuure";

	begin_list = ft_create_elem(a);
	ft_list_push_back(&begin_list, b);
	ft_list_push_back(&begin_list, c);
	ft_list_push_back(&begin_list, d);
	printf("%d\n", ft_list_size(begin_list));
	print_list(begin_list);
	return (0);
}
