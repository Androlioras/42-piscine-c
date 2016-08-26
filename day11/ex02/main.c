/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:59:40 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 22:08:48 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_list(t_list *list);

int		main(void)
{
	t_list	*begin_list;
	char *a = "abc";
	char *b = "lol";
	char *c = "bll";

	begin_list = ft_create_elem(a);
	ft_list_push_front(&begin_list, b);
	ft_list_push_front(&begin_list, c);
	print_list(begin_list);
	return (0);
}
