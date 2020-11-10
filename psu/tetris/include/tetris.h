/*
** EPITECH PROJECT, 2018
** tetris.h
** File description:
** tetris header
*/

#ifndef __TETRIS_H__
#define __TETRIS_H__

#include <ncurses.h>
#include <curses.h>
#include "../lib/my/include/my.h"
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <time.h>

typedef struct tetri {
	int width;
	int height;
	int color_code;
	char **shape;
} tetri_t;

typedef struct container {
	int nb_tetri;
	tetri_t **tetrimino;
} container_t;

typedef struct command_and_datas {
	int left_k;
	int right_k;
	int turn_k;
	int drop_k;
	int quit_k;
	int pause_k;
	int lvl;
	int map_row;
	int map_col;
	bool next;
} game_t;

void	assign_touch(char *opt, char *key, game_t *tmp);
void	change_term_mode(int i);
bool	check_datas(game_t *commands);
bool	check_game_opts(game_t *tmp);
bool	check_keys(game_t *tmp);
void	check_tetrimino(char *name);
int	count_nbrs(char *str);
int	count_tetriminos(void);
void	display_ncurses(game_t *commands);
game_t	*get_commands(int ac, char **av);
char	*get_ext(char *file);
tetri_t	*get_rdm_tetri(int i, container_t *container);
int	*init_stat_arr(char *name);
bool	is_map_size_format(char *str);
void	last_assignement(char *opt, game_t *tmp);
void	my_closedir(DIR *ptr);
bool	my_isalpha(char c);
bool	my_isnbr(char *str);
int	my_open(char *file);
void	my_perror(char *str);
char	**my_sort_char_array(char **array);
void	print_commands(game_t *commands);
void	print_next_commands(game_t *commands);
void	pause_key(char *opt, char *key, game_t *tmp);
int	play_tetris(game_t *commands);
void	print_command(char *str, int cmd);
void	print_debug(game_t *commands);
void	print_map(int width, int height);
void	print_name(char *file);
void	print_stats(int *stats);
void	print_tetrimino_shape(char *file);
void	print_top_line(void);
void	print_second_line(void);
void	print_third_line(void);
void	print_fourth_line(void);
void	print_bottom_line(void);
void	set_color_pairs(void);
void	set_game_opts(char *opt, char *key, game_t *tmp);
char	**stock_tetriminos(int cnt);
container_t	*stock_and_save_tetriminos(void);
int	verify_map(char *file, int *stats);
bool	verify_tetrimino(char *name);

#endif
