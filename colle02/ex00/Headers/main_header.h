/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:43:41 by pribault          #+#    #+#             */
/*   Updated: 2016/08/21 16:13:06 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_H
# define MAIN_HEADER_H

# include <unistd.h>
# include <stdlib.h>

# define SIZE 1000
# define TIRELIPINPON_SUR_LE_CHIWAWA "aucune"

void	ft_putstr(char *str);
char	**allocate_array(char *line);
char	**fill_array(char *line, char **array);
void	error(void);
void	check(char *line);
int		ft_strcmp(char *s1, char *s2);
void	colle00(int x, int y, char *line);
void	colle01(int x, int y, char *line);
void	colle02(int x, int y, char *line);
void	colle03(int x, int y, char *line);
void	colle04(int x, int y, char *line);
void	ft_char00(int x, int y, int i[2], char *line);
void	ft_char01(int x, int y, int i[2], char *line);
void	ft_char02(int x, int y, int i[2], char *line);
void	ft_char03(int x, int y, int i[2], char *line);
void	ft_char04(int x, int y, int i[2], char *line);
void	ft_one01(int x, int y, int i[2], char *line);
void	ft_one04(int x, int y, int i[2], char *line);
int		ft_atoi(char *str);
void	calc_array(char *str, int *x_y);
void	ft_putnbr(int n);
void	ft_putchar(char c);
char	*generate_string(char *line, int n);
void	display(char *str, int number, int count);

#endif
