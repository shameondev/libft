/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:24:41 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 15:14:40 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hindex;
	size_t nindex;

	hindex = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[hindex] != '\0' && hindex < len)
	{
		nindex = 1;
		if (haystack[hindex] == needle[0])
		{
			while (haystack[hindex + nindex] == needle[nindex] &&
					(hindex + nindex) < len && needle[nindex] != '\0')
			{
				nindex++;
			}
			if (needle[nindex] == '\0')
				return ((char *)&haystack[hindex]);
		}
		hindex++;
	}
	return (0);
}
