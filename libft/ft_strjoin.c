/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:45:03 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 16:34:39 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;

	size = 0;
	if (!s1 || !s2)
		return (NULL);
	if (s1 && s2)
		size = (size_t)(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	else if (s1)
		size = (size_t)ft_strlen((char *)s1);
	else if (s2)
		size = (size_t)ft_strlen((char *)s2);
	if (!(result = ft_memalloc(size + 1)))
		return (NULL);
	if (s1)
		result = ft_strcpy(result, (char *)s1);
	else
		result = ft_strcpy(result, (char *)s2);
	if (s1 && s2)
		result = ft_strcat(result, (char*)s2);
	return (result);
}
