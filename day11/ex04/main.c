/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:39:07 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 23:09:33 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_list(t_list *list);
void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*begin_list;
	char	*a = "poulpe";
	char	*b = "sandwich";
	char	*c = "chaton";
	char	*d = "quand je suis content je vomis";
	char	*e = "beuaaaaaaaargh";

	begin_list = ft_create_elem(a);
	ft_list_push_back(&begin_list, b);
	ft_list_push_back(&begin_list, c);
	ft_list_push_back(&begin_list, d);
	ft_list_push_back(&begin_list, e);
	print_list(begin_list);
	print_list(ft_list_last(begin_list));
	return (0);
}
