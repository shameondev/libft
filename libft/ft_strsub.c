/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:38:08 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 16:05:37 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;

	index = 0;
	if (!s || !(substr = ft_memalloc(len + 1)))
		return (NULL);
	while (index < len)
		substr[index++] = s[start++];
	return (substr);
}
