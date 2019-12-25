/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:28:50 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 13:12:43 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*casteddst;
	const unsigned char *castedsrc;
	size_t				index;

	casteddst = dst;
	castedsrc = src;
	index = 0;
	if (casteddst == 0 && castedsrc == 0)
		return (0);
	if (src < dst)
		while (index++ < len)
			casteddst[len - index] = castedsrc[len - index];
	else
		while (index++ < len)
			*casteddst++ = *castedsrc++;
	return (dst);
}
