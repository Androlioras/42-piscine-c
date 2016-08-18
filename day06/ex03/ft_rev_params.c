/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:34:48 by pribault          #+#    #+#             */
/*   Updated: 2016/08/12 11:39:26 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int k;

	argc--;
	while (argc >= 1)
	{
		k = 0;
		while (argv[argc][k] != '\0')
		{
			ft_putchar(argv[argc][k]);
			k++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
