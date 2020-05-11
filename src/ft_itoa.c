/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:08:53 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:42 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	size_t	i;
	size_t	n_size;
	char	*str;

	i = 0;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	n_size = ft_nbrlen(nbr, 10);
	if (!(str = (char *)malloc(sizeof(char) * (n_size + 1))))
		return (NULL);
	str[n_size] = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
		i++;
	}
	while (i < n_size--)
	{
		str[n_size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
