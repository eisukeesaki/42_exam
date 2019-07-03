/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 01:22:30 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/03 01:27:57 by eesaki           ###   ########.fr       */
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
	int		len;
	int		i;
	int		k;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	k = len - 1;
	while (i < k)
	{
		tmp = str[i];
		str[i] = str[k];
		str[k] = tmp;
		i++;
		k--;
	}
	return (str);
}
