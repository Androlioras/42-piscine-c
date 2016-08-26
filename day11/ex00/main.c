/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:54:56 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 20:18:40 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

int		main(void)
{
	t_list	*elem;
	int		i;
	int		*p;

	i = 789;
	p = &i;
	elem = ft_create_elem(p);
	elem->data = p;
	printf("%d %p\n", *p, elem->next);
	return (0);
}
