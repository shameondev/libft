/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:18:34 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 17:30:36 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	if (n)
	{
		while (s1[index] && s2[index] && s1[index] == s2[index] &&
				index < n - 1)
			index++;
		return ((unsigned char)s1[index] - (unsigned char)s2[index]);
	}
	return (0);
}
