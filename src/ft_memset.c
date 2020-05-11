/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:13:14 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:14:01 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int val, size_t len)
{
	unsigned char *arr;

	arr = (unsigned char*)b;
	while (len--)
		arr[len] = (unsigned char)val;
	return (b);
}
