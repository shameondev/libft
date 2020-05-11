/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 12:41:34 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:14:36 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *searchstr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!searchstr[j])
		return ((char*)&str[i]);
	while (str[i])
	{
		while ((str[i + j] == searchstr[j]) && searchstr[j])
			j++;
		if (!searchstr[j])
			return ((char*)&str[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
