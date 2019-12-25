/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 10:05:23 by lvoyance          #+#    #+#             */
/*   Updated: 2019/09/21 20:46:44 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int result;

	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		result = (unsigned int)(nbr * -1);
	}
	else
		result = (unsigned int)nbr;
	if (result >= 10)
		ft_putnbr_fd(result / 10, fd);
	ft_putchar_fd((char)((result % 10) + '0'), fd);
}
