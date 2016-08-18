/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc_verif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 00:20:02 by pribault          #+#    #+#             */
/*   Updated: 2016/08/11 15:59:28 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_atoi(char *str);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strstr(char *str, char *to_find);

int		ft_strcmp(char *s1, char *s2);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strupcase(char *str);

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

int		ft_str_is_alpha(char *str);

int		ft_str_is_numeric(char *str);

int		ft_str_is_lowercase(char *str);

int		ft_str_is_uppercase(char *str);

int		ft_str_is_printable(char *str);

char	*ft_strcat(char *dest, char *src);

char	*ft_strncat(char *dest, char *src, int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	exo(int ex)
{
	char str[] = "Bien qu’étant conseillée pour les nourrissons, la cocaïne peut également entrer dans la 73composition de+divers-plats variés et relativement différents les uns des autres.";
	char str2[] = "  42";
	char str3[] = "j'aime les Yaouuuuuuuurts !!!";
	char find[] = "les";
	//char str4[] = "ONCHE ONCHE OOOOONCHE";
	char empty_str[100];
	int nb = 1000;
	int nb2 = 10;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		empty_str[i] = str[i];
		i++;
	}
	empty_str[i] = str[i];

	if (ex < 10)
		printf("     -ex0%d-\n\n", ex);
	else
		printf("     -ex%d-\n\n", ex);
	if (ex == 0)
	{
		printf("chaine de base:  %s\n", str);
		printf("chaine renvoyee: ");
		ft_putstr(str);
		printf("\n");
	}
	else if (ex == 1)
	{
		printf("nombre de base:  %d\n", nb);
		printf("nombre renvoye:\n");
		ft_putnbr(nb);
		printf("\n\n");
	}
	else if (ex == 2)
	{
		printf("chaine de base:  %s\n", str2);
		printf("chaine attendue: %d\n", atoi(str2));
		printf("chaine renvoyee: %d\n", ft_atoi(str2));
	}
	else if (ex == 3)
	{
		//printf("chaine de base:  %s\n", str3);
		//printf("chaine attendue: %s\n", strcpy(str3, str));
		//printf("chaine renvoyee: %s\n", ft_strcpy(str3, str));
	}
	else if (ex == 4)
	{
		printf("chaine de base:  %s\n",str);
		printf("chaine attendue: %s\n", strncpy(str3, str, nb2));
		printf("chaine renvoyee: %s\n", ft_strncpy(str3, str, nb2));
	}
	else if (ex == 5)
	{
		printf("chaine de base:  %s\n", str3);
		//printf("chaine attendue: %s\n", strstr(str3, find));
		printf("chaine renvoyee: %s\n", ft_strstr(str3, find));
	}
	else if (ex == 6)
	{
		printf("chaine de base:  %s\n", str);
		printf("nombre attendue: %d\n", strcmp(str, find));
		printf("nombre renvoyee: %d\n", ft_strcmp(str, find));
	}
	else if (ex == 7)
	{
		printf("chaine de base:  %s\n", str);
		printf("nombre attendue: %d\n", strncmp(str, find, nb2));
		printf("nombre renvoyee: %d\n", ft_strncmp(str, find, nb2));
	}
	else if (ex == 8)
	{
		printf("chaine de base:  %s\n", str);
		printf("chaine renvoyee: %s\n", ft_strupcase(str));
	}
	else if (ex == 9)
	{
		printf("chaine de base:  %s\n", str);
		printf("chaine renvoyee: %s\n", ft_strlowcase(str));
	}
	else if (ex == 10)
	{
		printf("chaine de base:  %s\n", str);
		printf("chaine renvoyee: %s\n", ft_strcapitalize(str));
	}
	else if (ex == 11)
	{
		printf("chaine de base:  %s\n", str);
		printf("valeur renvoyee: %d\n", ft_str_is_alpha(str));
	}
	else if (ex == 12)
	{
		printf("chaine de base:  %s\n", str);
		printf("valeur renvoyee: %d\n", ft_str_is_numeric(str));
	}
	else if (ex == 13)
	{
		printf("chaine de base:  %s\n", str);
		printf("valeur renvoyee: %d\n", ft_str_is_lowercase(str));
	}
	else if (ex == 14)
	{
		printf("chaine de base:  %s\n", str);
		printf("valeur renvoyee: %d\n", ft_str_is_uppercase(str));
	}
	else if (ex == 15)
	{
		printf("chaine de base:  %s\n", str);
		printf("valeur renvoyee: %d\n", ft_str_is_printable(str));
	}	
	else if (ex == 16)
	{
		printf("chaine de base:  %s\n", str);
		printf("chaine attendue: %s\n", strcat("plmMLAEuKrxLFeeUi", ""));
		printf("chaine renvoyee: %s\n", ft_strcat("plmMLAEuKrxLFeeUi", "mkuPeQbBBkWsdxGEWvIqTtnDYqUaCgLstHsLqdBEAdlvjCxmtwZBkObyGYGKhQ"));
	}
	printf("\n\n\n");
}

int		main(void)
{
	int ex_max;
	int ex;

	ex_max = 17;
	ex = 0;
	while (ex <= ex_max)
	{
		exo(ex);
		ex++;
	}
	return (0);
}
