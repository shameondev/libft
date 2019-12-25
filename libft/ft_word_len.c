/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:43:22 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 17:52:52 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_len(char const *str, char c)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (str[index] == c)
		index++;
	while (str[index] != c && str[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}
