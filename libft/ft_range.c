/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:04:35 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/06 15:27:20 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (max > min)
	{
		range[max - min - 1] = max - 1;
		max--;
	}
	return (range);
}
