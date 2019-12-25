/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:17:34 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/10 10:57:44 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (s1[index] != '\0')
		index++;
	while (s2[index2] != '\0')
		s1[index++] = s2[index2++];
	s1[index] = '\0';
	return (s1);
}
