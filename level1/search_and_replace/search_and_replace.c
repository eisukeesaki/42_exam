/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 23:51:12 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/30 00:14:35 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	search_and_replace(char *s, char *search, char *replace)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == search[0])
			ft_putchar(replace[0]);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4 && (ft_strlen(av[2]) == 1) && (ft_strlen(av[3]) == 1))
		search_and_replace(av[1], av[2], av[3]);
	ft_putchar('\n');
	return (0);
}
