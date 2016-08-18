/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 10:29:45 by pribault          #+#    #+#             */
/*   Updated: 2016/08/18 10:44:11 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char	**ft_split_whitespaces(char *str);

void	ft_show_tab(struct s_stock_par *par);

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	t_stock_par	par;

	par.tab = ft_split_whitespaces(
	return (par.tab);
}
