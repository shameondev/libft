/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 12:17:11 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 14:44:21 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newelem;

	if (!(newelem = (t_list *)malloc(sizeof(t_list *) * content_size)))
		return (NULL);
	if (!content)
	{
		newelem->content = NULL;
		newelem->content_size = 0;
	}
	else
	{
		if (!(newelem->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(newelem->content, content, content_size);
		newelem->content_size = content_size;
	}
	newelem->next = NULL;
	return (newelem);
}
