/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 20:23:42 by pribault          #+#    #+#             */
/*   Updated: 2016/08/15 10:07:01 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i[3];

	i[0] = 0;
	i[2] = 0;
	while (s1[i[0]] != '\0' && s2[i[0]] != '\0' && i[2] == 0)
	{
		if (s1[i[0]] < s2[i[0]])
			i[2] = 1;
		else if (s1[i[0]] > s2[i[0]])
			i[2] = 1;
		i[0]++;
	}
	if (i[2] == 1)
	{
		i[0]--;
		i[1] = s1[i[0]] - s2[i[0]];
	}
	else if (s1[i[0]] == '\0' && s2[i[0]] == '\0')
		i[1] = 0;
	else if (s1[i[0]] == '\0')
		i[1] = -s2[i[0]];
	else
		i[1] = s1[i[0]];
	return (i[1]);
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;
	char *mem;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (argv[j + 1])
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				mem = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = mem;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	ft_print_params(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
