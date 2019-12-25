/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:40:14 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/22 15:10:42 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	result;
	long long int	tmp;
	int				sign;
	int				i;

	sign = 1;
	i = 0;
	result = 0;
	tmp = result;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
	|| str[i] == '\v' || str[i] == '\r' || str[i] == '\0' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < tmp && sign == 1)
			return (-1);
		if (result < tmp && sign == -1)
			return (0);
		result = (result * 10) + (str[i++] - '0');
	}
	return (result * sign);
}
