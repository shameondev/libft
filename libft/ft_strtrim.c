/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:17:41 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 17:31:29 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		index;
	int		len;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index] != '\0' && (s[index] == ' ' || s[index] == '\n'
				|| s[index] == '\t'))
		index++;
	len = ft_strlen(s);
	while (index < len && (s[len - 1] == ' ' || s[len - 1] == '\n'
				|| s[len - 1] == '\t'))
		len--;
	if (index == len)
		return (ft_strnew(1));
	return (ft_strsub(s, index, len - index));
}
