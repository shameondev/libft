/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 19:01:52 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:14:32 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *arr;

	if (!(arr = malloc(size + 1)))
		return (NULL);
	ft_bzero(arr, size);
	arr[size] = '\0';
	return (arr);
}
