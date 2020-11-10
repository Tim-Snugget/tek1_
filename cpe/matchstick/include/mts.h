/*
** EPITECH PROJECT, 2018
** mts.h
** File description:
** matchstick header
*/

#ifndef __MTS_H__
#define __MTS_H__

#include "my.h"

typedef struct vector2int {
	int line;
	int mat;
} Vector2i;

typedef struct map_struct {
	char **map;
	int size;
	int board_s;
	int max_w;
}Map;

void	ai_s_turn(Map *board, int mat_lim);
bool	check_mat(int mat, int mat_lim, char *row_line);
int	close_end(Map *board);
void	disp_map(Map *board);
void	disp_turn(Vector2i turn, int select_p);
Map	*get_map(int line);
int	get_chosen_line(int max_line);
int	get_chosen_match(int mat_lim, char *map_row);
int	get_smallest(int a, int b);
bool	isnum(char *s);
bool	is_game_over(Map *board);
void	mod_map(char *map_row, int mat, int max_w);
bool	parse_args(char **args);
int	player_s_turn(Map *board, int mat_lim);
void	print_match_error(int mat, int mat_lim);
int	remaining_matches(char *map_row);
int	run_the_game(Map *board, int mat_lim);
int	select_ai_line(Map *board);
Vector2i	think_ai(Map *board, int end, int mat_lim);
#endif
