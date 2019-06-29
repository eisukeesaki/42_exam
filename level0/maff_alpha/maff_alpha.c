/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 23:01:43 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/28 23:01:44 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char	lwr;
	char	upr;

	lwr = 'a';
	upr = 'B';
	while (upr <= 'Z')
	{
		ft_putchar(lwr);
		ft_putchar(upr);
		lwr += 2;
		upr += 2;
	}
}

int		main(void)
{
	maff_alpha();
	ft_putchar('\n');
	return (0);
}
