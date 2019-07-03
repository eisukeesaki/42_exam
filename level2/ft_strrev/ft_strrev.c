/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 01:22:30 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/03 01:47:40 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	int		k;
	char	buff;

	i = 0;
	len = ft_strlen(str);
	k = len - 1;
	while (i < k)
	{
		buff = str[i];
		str[i] = str[k];
		str[k] = buff;
		i++;
		k--;
	}
	return (str);
}
