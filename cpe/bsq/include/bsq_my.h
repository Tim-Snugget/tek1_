/*
** EPITECH PROJECT, 2017
** bsq_my.h
** File description:
** header of my bsq
*/

#ifndef _BSQ_MY_H_
#define _BSQ_MY_H_

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#include "my.h"

typedef struct coordinates {
	union {
		size_t x;
		size_t width;
	};
	union {
		size_t y;
		size_t height;
	};
} Coords;

typedef struct datas {
	Coords first_case;
	size_t size_sq;
	Coords checker;
	Coords map_dims;
} Datas;

void	bsq(char **tab, int nb_line);
bool	check_add_k(char **tab, size_t k, Datas *sq);
bool	check_cols(char **tab, size_t k, Datas *sq);
bool	check_else(char **map, int nb_line, int x, int y);
bool	check_lines(char **tab, size_t k, Datas *sq);
void	check_square(Datas *sq, char **tab);
void	display_map(char **tab, size_t nb_line);
int	full_obs(char **map, int nb_line);
char	**get_double_tab(const char *buf, int nb_line);
int	get_line_len(const char *buf, int z);
char	*load_map(const char *file);
void	one_line_handling(const char *buf);
void	print_bsq(Datas *sq, char **tab);
void	set_datas(Datas *sq, int nb_line, int line_lim);
int	set_z(const char *buf);
void	single_hdlg(char **map, int nb_line);
bool	special_case(char **map, int nb_line);

#endif
