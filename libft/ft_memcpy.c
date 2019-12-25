/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:25:24 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:12:19 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t len)
{
	unsigned char		*casteddst;
	const unsigned char *castedsrc;

	casteddst = (unsigned char*)dst;
	castedsrc = (unsigned char*)src;
	if (casteddst == 0 && castedsrc == 0)
		return (0);
	while (len-- > 0)
		*(casteddst++) = *(castedsrc++);
	return (dst);
}
