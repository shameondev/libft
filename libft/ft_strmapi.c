/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:15:49 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:55:09 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	index = 0;
	if (!s || !(result = ft_memalloc((size_t)(ft_strlen((char *)s) + 1))))
		return (NULL);
	while (s[index] != '\0')
	{
		result[index] = f(index, s[index]);
		index++;
	}
	return (result);
}
