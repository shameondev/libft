/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:52:22 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:13:13 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int hindex;
	int nindex;

	hindex = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[hindex] != '\0')
	{
		nindex = 1;
		if (haystack[hindex] == needle[0])
		{
			while (haystack[hindex + nindex] == needle[nindex]
					&& needle[nindex] != '\0')
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
