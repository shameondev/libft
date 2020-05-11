/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 10:51:50 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:58 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t len)
{
	unsigned char *ptrdst;
	unsigned char *ptrsrc;

	ptrdst = (unsigned char*)destination;
	ptrsrc = (unsigned char*)source;
	if (ptrdst == 0 && ptrsrc == 0)
		return (0);
	while (len--)
		ptrdst[len] = ptrsrc[len];
	return (destination);
}
