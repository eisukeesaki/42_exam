/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 21:10:09 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/28 21:10:38 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'a')
		{
			ft_putchar(s[i]);
			break ;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		aff_a(av[1]);
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
