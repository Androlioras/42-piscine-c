/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 23:54:54 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 00:37:24 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#ifndef __FT_ULTIMATOR_H__
# define __FT_ULTIMATOR_H__

void	ft_destroy(char ***factory)
{
	free(factory);
}
