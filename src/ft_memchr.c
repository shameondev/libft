/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:19:19 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:57 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*srcptr;
	size_t			i;

	srcptr = (unsigned char*)s;
	i = 0;
	while (i < len)
	{
		if (srcptr[i] == (unsigned char)c)
			return ((void*)&srcptr[i]);
		i++;
	}
	return (NULL);
}
