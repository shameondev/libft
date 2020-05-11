/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:55:35 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:14:00 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	size_t			i;
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	dstptr = (unsigned char*)destination;
	srcptr = (unsigned char*)source;
	i = 0;
	if (dstptr == 0 && srcptr == 0)
		return (0);
	if (dstptr > srcptr)
	{
		while (len--)
			dstptr[len] = srcptr[len];
	}
	else
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
	return (destination);
}
