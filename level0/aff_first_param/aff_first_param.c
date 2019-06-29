/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 21:37:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/29 00:18:34 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_first_param(char **s)
{
	size_t	first;
	size_t	i;

	first = 1;
	i = 0;
	while (s[first][i])
	{
		ft_putchar(s[first][i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac >= 2)
		aff_first_param(av);
	ft_putchar('\n');
	return (0);
}
