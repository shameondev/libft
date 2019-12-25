/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:26:44 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/12 10:48:05 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *lastoccur;

	lastoccur = 0;
	while (*s)
	{
		if (*s == (char)c)
			lastoccur = (char*)s;
		s++;
	}
	if (lastoccur)
		return (lastoccur);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
