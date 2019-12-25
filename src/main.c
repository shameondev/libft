/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 19:32:53 by lvoyance          #+#    #+#             */
/*   Updated: 2019/12/18 19:32:56 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int fd;
	int fd2;

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[1], O_RDONLY);
	if (ac != 2)
	{
		ft_putstr("usage: ./fillit (tetriminos_file)\n");
		return (0);
	}
	if (check_result(fd) < 0 || check_input(fd2) <= 0)
		ft_putstr("error\n");
	close(fd);
	close(fd2);
	return (0);
}
