/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:48:19 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:12:47 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t indexs1;
	size_t indexs2;

	indexs1 = 0;
	indexs2 = 0;
	while (s1[indexs1] != '\0')
		indexs1++;
	while (s2[indexs2] != '\0' && indexs2 < n)
		s1[indexs1++] = s2[indexs2++];
	s1[indexs1] = '\0';
	return (s1);
}
