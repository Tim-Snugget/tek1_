/*
** EPITECH PROJECT, 2018
** dante : solver : include
** File description:
** include
*/

#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_coords
{
	int x;
	int y;
} coords_t;

void display_map(char **map, coords_t *, bool *);
void free_array(char **);

/* get and parse map */

char **check_params(int ac, char **av);
char **get_from_file(char *path);
int read_file(char *path);
bool parse_file(char **map);
bool parse_line(char *column);

/* algorithm */

void fill_dead_end(char **map, coords_t *, coords_t *, bool *);
bool is_blocked(char **map, coords_t *, coords_t *);
void explore(char **, coords_t *, coords_t *, bool *);

#endif
