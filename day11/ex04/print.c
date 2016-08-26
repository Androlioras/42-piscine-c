/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:14:21 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 22:49:14 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
	while (list)
	{
		printf("[%s] -> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}
