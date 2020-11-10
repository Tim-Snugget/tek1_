/*
** EPITECH PROJECT, 2018
** sokoban.h
** File description:
** soko header
*/

#ifndef __SOKOBAN_H__
#define __SOKOBAN_H__

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "../lib/my/include/my.h"
#include <ncurses.h>

typedef struct coordinates {
	int x;
	int y;
} coords_t;

typedef struct game_structure {
	coords_t *player;
	coords_t **slots;
	char *map_name;
	int nb_crates;
} game_t;

/* check fcts */
bool	analyze_line_pos(char **, int, game_t *);
bool	check_box_slots(char **map);
bool	check_char(char c);
bool	check_crate(char *map);
bool	check_single_player(char **map);
bool	is_surround_crate(char **, int, int);
bool	is_game_finished(char **, game_t *);
bool	parse_map(char **map);

/*count fcts */
int	count_crates(char);
int	count_slots(char c);

/* get fcts */
game_t	*get_game_infos(char **map, char *name);
char	**get_map(char *name);

/* little fcts */
int	my_open(char *name);

/* game fcts */
void	display_map(char **map, WINDOW *wdw);
void	do_action(char **map, game_t *infos, int key);
WINDOW	*init_game_window(void);
void	play_game(game_t *, char **);
void	print_help(void);
game_t	*reset_infos(game_t *);
char	**reset_map(char **, char *);
int	run_game(char **map, game_t *infos);

#endif
