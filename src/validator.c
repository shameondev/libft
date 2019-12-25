/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:15:11 by lvoyance          #+#    #+#             */
/*   Updated: 2019/12/21 17:34:26 by alorilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_array(char **array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(array[i]);
		i++;
	}
	free_arr(array, 13);
}

int		check_connection(const char *buff)
{
	int index;
	int connection;

	index = 0;
	connection = 0;
	while (index < 20)
	{
		if (buff[index] == '#')
		{
			if (index + 1 < 19 && buff[index + 1] == '#')
				connection++;
			if (index + 5 < 19 && buff[index + 5] == '#')
				connection++;
			if (index - 1 >= 0 && buff[index - 1] == '#')
				connection++;
			if (index - 5 >= 0 && buff[index - 5] == '#')
				connection++;
		}
		index++;
	}
	if (!(connection == 6 || connection == 8))
		return (1);
	return (0);
}

int		check_file(int result, const char *buff)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (index < 20)
	{
		if (index % 5 < 4 && !(buff[index] == '.' || buff[index] == '#'))
			return (1);
		if (index % 5 < 4 && buff[index] == '#' && ++count > 4)
			return (1);
		if (index % 5 == 4 && buff[index] != '\n')
			return (1);
		index++;
	}
	if (result == 21 && buff[index] != '\n')
		return (1);
	if (check_connection(buff))
		return (1);
	return (0);
}

int		check_result(int fd)
{
	int		result;
	char	*buff;
	int		total_read;

	buff = ft_strnew(21);
	total_read = 0;
	while ((result = read(fd, buff, 21)) >= 20)
		total_read = total_read + result;
	free(buff);
	if (total_read % 21 == 0)
		return (-1);
	return (0);
}

int		check_input(int fd)
{
	int		result;
	char	*buff;
	char	c;
	char	*figures[26];
	int		n_figures;

	n_figures = 0;
	c = 'A';
	buff = ft_strnew(21);
	while ((result = read(fd, buff, 21)) >= 20)
	{
		if (check_file(result, buff))
			return (-1);
		figures[n_figures] = get_coords(ft_strsplit(buff, '\n'), c++);
		n_figures++;
	}
	if (n_figures > 26 || result != 0 || n_figures == 0)
		return (-1);
	solve_map(make_map(2), figures, n_figures);
	free_arr(figures, n_figures);
	free(buff);
	return (1);
}
