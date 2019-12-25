/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:53:52 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:11:58 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*casteds1;
	unsigned char	*casteds2;
	size_t			index;

	index = 0;
	casteds1 = (unsigned char *)s1;
	casteds2 = (unsigned char *)s2;
	while (index < len && casteds1[index] == casteds2[index])
		index++;
	if (index == len)
		return (0);
	else
		return (casteds1[index] - casteds2[index]);
}
