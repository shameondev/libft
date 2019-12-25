/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 10:58:40 by lvoyance          #+#    #+#             */
/*   Updated: 2019/12/19 19:21:32 by lvoyance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

int		main(int ac, char **av);
int		check_input(int fd);
char	*get_coords(char **str, char value);
void	print_array(char **array, int size);
int		solve_map(char **map, char **figures, int n_figures);
char	**make_map(int map_size);
int		solver(char **map, char **figures, int n_figures, int n);
int		is_place(char *figure, char **map, int y_map, int x_map);
void	put_figure(char *figure, char **map, int y_map, int x_map);
int		map_size(int n_figures);
void	delete_figure(char *figure, char **map, int y_map, int x_map);
int		check_result(int fd);
void	free_arr(char **arr, int n);

#endif
