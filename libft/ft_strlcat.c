/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:02:04 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 14:40:19 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t indexsrc;
	size_t indexdst;
	size_t len;

	indexsrc = 0;
	indexdst = 0;
	len = 0;
	while (dst[indexdst] != '\0')
		indexdst++;
	while (src[len] != '\0')
		len++;
	if (size <= indexdst)
		len += size;
	else
		len += indexdst;
	while (src[indexsrc] != '\0' && indexdst + 1 < size)
	{
		dst[indexdst] = src[indexsrc];
		indexdst++;
		indexsrc++;
	}
	dst[indexdst] = '\0';
	return (len);
}
