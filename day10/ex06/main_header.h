/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 19:48:16 by pribault          #+#    #+#             */
/*   Updated: 2016/08/23 15:34:17 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_H
# define MAIN_HEADER_H

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		result_calc(int a, int b, int(**f)(int a, int b), char **argv);
int		addition(int a, int b);
int		substraction(int a, int b);
int		multiplication(int a, int b);
int		division(int a, int b);
int		modulo(int a, int b);

#endif
