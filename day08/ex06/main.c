/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:53:35 by pribault          #+#    #+#             */
/*   Updated: 2016/08/18 19:04:28 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_par *par);

int		main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
	return (0);
}
