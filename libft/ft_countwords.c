/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:44:26 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 17:51:28 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int count;
	int index;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] == c)
			index++;
		if (str[index] != c && str[index] != '\0')
			count++;
		while (str[index] != c && str[index] != '\0')
			index++;
	}
	return (count);
}
