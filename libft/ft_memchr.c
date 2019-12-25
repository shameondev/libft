/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:28:51 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/19 10:48:44 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *dest;
	size_t				index;

	dest = s;
	index = 0;
	while (index < n)
		if (dest[index] == (unsigned char)c)
			return ((void*)(s + index));
		else
			index++;
	return (NULL);
}
