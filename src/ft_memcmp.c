/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:07:47 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:57 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*srcptr1;
	unsigned char	*srcptr2;
	unsigned int	i;

	srcptr1 = (unsigned char*)s1;
	srcptr2 = (unsigned char*)s2;
	i = 0;
	while (i < len && srcptr1[i] == srcptr2[i])
		i++;
	if (i == len)
		return (0);
	else
		return (srcptr1[i] - srcptr2[i]);
}
