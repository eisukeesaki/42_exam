/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:19:49 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/28 20:20:33 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				res;

	if (!tab || !len)
		return (0);
	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
