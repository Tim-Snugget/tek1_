/*
** EPITECH PROJECT, 2018
** dante : generator : include
** File description:
** include
*/

#ifndef __GEN_H__
#define __GEN_H__

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct maze_cell {
	int left;
	int top;
} cell_t;

void carve_perfect_labyrinth(cell_t **maze, int *infos);

/* check fcts */
bool check_params(int, char **);
bool is_pos_nbr(char *s);

/* maze manipulation */
cell_t **init_maze(int *);
void destroy_maze(cell_t **);
void display_maze(cell_t **, int *);
int *get_infos(int, char **);
int get_random_nbr(void);
void shuffle_maze(cell_t **, int *);

/* lib functions */
void *my_malloc(int);
void my_free(void *);

#endif
