/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:13:05 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:14:33 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *searchstr, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!searchstr[j])
		return ((char*)&str[i]);
	while (str[i] && i < len)
	{
		while (str[i + j] == searchstr[j] && searchstr[j] && ((i + j) < len))
			j++;
		if (!searchstr[j])
			return ((char*)&str[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
