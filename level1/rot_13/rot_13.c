/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 23:32:03 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/29 23:46:49 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'M')
			ft_putchar(s[i] + 13);
		else if (s[i] > 'M' && s[i] <= 'Z')
			ft_putchar(s[i] - 13);
		else if (s[i] >= 'a' && s[i] <= 'm')
			ft_putchar(s[i] + 13);
		else if (s[i] > 'm' && s[i] <= 'z')
			ft_putchar(s[i] - 13);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}
