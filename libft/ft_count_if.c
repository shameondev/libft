/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:12:23 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/04 17:33:58 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int count;

	count = 0;
	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
