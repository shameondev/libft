/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:04:40 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/09 17:19:42 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		len;
	int		index;

	len = 0;
	index = 0;
	while (s1[len])
		len++;
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[index])
	{
		new[index] = s1[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}
