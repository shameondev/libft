/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:54:43 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 17:30:35 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	index;

	index = 0;
	if (!(size + 1))
		return (NULL);
	if (!(string = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (index <= size)
		string[index++] = '\0';
	return (string);
}
