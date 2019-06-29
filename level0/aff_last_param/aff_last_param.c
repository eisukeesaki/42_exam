/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 21:37:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/29 00:19:02 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_last_param(int ac, char **av)
{
	size_t	last;
	size_t	i;

	last = ac - 1;
	i = 0;
	while (av[last][i])
	{
		ft_putchar(av[last][i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac >= 2)
		aff_last_param(ac, av);
	ft_putchar('\n');
	return (0);
}
