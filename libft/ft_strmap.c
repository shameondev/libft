/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:53:01 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:54:16 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		index;

	index = 0;
	if (!s || !(result = ft_memalloc((size_t)(ft_strlen((char *)s) + 1))))
		return (NULL);
	while (s[index] != '\0')
	{
		result[index] = f(s[index]);
		index++;
	}
	return (result);
}
