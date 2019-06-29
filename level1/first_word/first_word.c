/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 00:15:28 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/29 00:15:29 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_iswhitespace(char c)
{
	return (c == ' ' || c == '\t');
}

void	first_word(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_iswhitespace(s[i]))
		i++;
	while (s[i] && !ft_iswhitespace(s[i]))
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return (0);
}
