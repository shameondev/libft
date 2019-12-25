/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:39:56 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 17:46:40 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		rowindex;
	int		strindex;
	int		index;
	char	**str;

	rowindex = -1;
	strindex = 0;
	if (!s || !(str = (char **)malloc(sizeof(*str) *
		(ft_countwords(s, c) + 1))))
		return (NULL);
	while (++rowindex < ft_countwords(s, c))
	{
		index = 0;
		if (!(str[rowindex] = ft_strnew(ft_word_len(&s[strindex], c))))
			str[rowindex] = NULL;
		while (s[strindex] == c)
			strindex++;
		while (s[strindex] != c && s[strindex])
			str[rowindex][index++] = s[strindex++];
		str[rowindex][index] = '\0';
	}
	str[rowindex] = 0;
	return (str);
}
