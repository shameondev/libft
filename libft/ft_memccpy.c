/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:10:09 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 13:10:13 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*casteddest;
	unsigned char		*castedsrc;
	size_t				index;

	casteddest = (unsigned char*)dest;
	castedsrc = (unsigned char*)src;
	index = 0;
	while (index < n)
	{
		casteddest[index] = castedsrc[index];
		if (castedsrc[index] == (unsigned char)c)
		{
			return ((void *)(dest + index + 1));
		}
		index++;
	}
	return (NULL);
}
