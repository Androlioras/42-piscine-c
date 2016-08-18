/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:02:39 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 16:22:41 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int		ft_strncmp(char *s1, char *s2, int nb);

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	int i;
	int alert;

	i = 1;
	alert = 0;
	while (argv[i] && i <= argc)
	{
		argv[i] = ft_strlowcase(argv[i]);
		if (ft_strncmp("president", ft_strstr(argv[i], "president"), 9) == 0)
			alert = 1;
		if (ft_strncmp("attack", ft_strstr(argv[i], "attack"), 6) == 0)
			alert = 1;
		if (ft_strncmp("powers", ft_strstr(argv[i], "powers"), 6) == 0)
			alert = 1;
		i++;
	}
	if (alert == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int b;

	i = 0;
	j = 0;
	b = 1;
	while (str[j] == ' ')
	{
		while (to_find[i] != '\0' && b == 1)
		{
			b = 1;
			if (to_find[i] != str[j])
				b = 0;
			i++;
		}
		j++;
	}
	return (str + j);
}

int		ft_strncmp(char *s1, char *s2, int nb)
{
	int i;
	int result;
	int boolean;

	i = 0;
	boolean = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && boolean == 0 && i < nb - 1)
	{
		if (s1[i] < s2[i])
			boolean = 1;
		else if (s1[i] > s2[i])
			boolean = 1;
		i++;
	}
	if (boolean == 1)
		result = s1[i - 1] - s2[i - 1];
	else if (s1[i] == '\0' && s2[i] == '\0')
		result = 0;
	else if (s1[i] == '\0')
		result = -s2[i];
	else if (s2[i] == '\0')
		result = s1[i];
	else
		result = 0;
	return (result);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
