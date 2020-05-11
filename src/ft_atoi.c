/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:39:45 by alorilee          #+#    #+#             */
/*   Updated: 2020/05/12 02:13:21 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	long long int	nbr;
	int				sign;
	long long int	tmp;

	i = 0;
	sign = 1;
	nbr = 0;
	tmp = nbr;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\0' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nbr < tmp && sign == 1)
			return (-1);
		if (nbr < tmp && sign == -1)
			return (0);
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (nbr * sign);
}
