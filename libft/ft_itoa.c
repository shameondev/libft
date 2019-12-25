/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:39:23 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:11:20 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t		len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tempn;

	len = get_len(n);
	tempn = n;
	if (n < 0)
	{
		tempn = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = tempn % 10 + '0';
	while (tempn /= 10)
		str[--len] = tempn % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
