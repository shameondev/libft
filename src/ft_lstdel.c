/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 22:16:54 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:47 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *adel;
	t_list *anxt;

	adel = *alst;
	while (adel)
	{
		anxt = adel->next;
		del((adel->content), (adel->content_size));
		free(adel);
		adel = anxt;
	}
	*alst = NULL;
}
