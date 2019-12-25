/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spliter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 19:33:15 by lvoyance          #+#    #+#             */
/*   Updated: 2019/12/19 19:24:10 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*get_coords(char **str, char value)
{
	int		rowindex;
	int		index;
	char	*coords;
	int		n;

	coords = ft_strnew(8);
	n = 0;
	rowindex = 0;
	while (str[rowindex] != 0)
	{
		index = 0;
		while (str[rowindex][index] != '\0')
		{
			if (str[rowindex][index++] == '#')
			{
				coords[n++] = (char)rowindex;
				coords[n++] = (char)(index - 1);
			}
		}
		rowindex++;
	}
	coords[n] = value;
	free_arr(str, rowindex);
	free(str);
	return (coords);
}

void	put_figure(char *figure, char **map, int y_map, int x_map)
{
	int index;
	int dy;
	int dx;

	dy = y_map - figure[0];
	dx = x_map - figure[1];
	index = 0;
	while (index < 8)
	{
		map[figure[index] + dy][figure[index + 1] + dx] = figure[8];
		index += 2;
	}
}

void	delete_figure(char *figure, char **map, int y_map, int x_map)
{
	int index;
	int dy;
	int dx;

	dy = y_map - figure[0];
	dx = x_map - figure[1];
	index = 0;
	while (index < 8)
	{
		map[figure[index] + dy][figure[index + 1] + dx] = '.';
		index += 2;
	}
}

int		is_place(char *figure, char **map, int y_map, int x_map)
{
	int index;
	int dy;
	int dx;

	index = 0;
	dy = y_map - figure[0];
	dx = x_map - figure[1];
	while (index < 8)
	{
		if (figure[index] + dy >= ft_word_len(map[0], '!')
		|| figure[index + 1] + dx >= ft_word_len(map[0], '!')
		|| figure[index] + dy < 0 || figure[index + 1] + dx < 0)
			return (0);
		if (map[figure[index] + dy][figure[index + 1] + dx] >= 'A'
		&& map[figure[index] + dy][figure[index + 1] + dx] <= 'Z')
			return (0);
		index += 2;
	}
	put_figure(figure, map, y_map, x_map);
	return (1);
}

char	**make_map(int map_size)
{
	int				rowindex;
	static char		*map[13];
	int				index;

	rowindex = 0;
	while (rowindex < 13)
		map[rowindex++] = ft_strnew(12);
	rowindex = 0;
	while (rowindex < 13)
	{
		index = 0;
		while (index < 12)
		{
			map[rowindex][index++] = '.';
			map[rowindex][map_size] = '!';
		}
		map[rowindex++][12] = '\n';
	}
	return (map);
}
