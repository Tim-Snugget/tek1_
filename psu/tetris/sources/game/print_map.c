/*
** EPITECH PROJECT, 2018
** print_map.c
** File description:
** print the map board
*/

#include "tetris.h"

char **get_map_pattern(int width)
{
	char **ptr = my_malloc(sizeof(char *) * 2);

	ptr[0] = my_malloc(sizeof(char) * (width * 2 +  4));
	my_memset(ptr[0], '-', sizeof(char) * (width * 2 + 4));
	ptr[0][0] = '+';
	ptr[0][width * 2 + 2] = '+';
	ptr[0][width * 2 + 3] = '\0';
	ptr[1] = my_malloc(sizeof(char) * (width * 2 + 4));
	my_memset(ptr[1], ' ', sizeof(char) * (width * 2 + 4));
	ptr[1][0] = '|';
	ptr[1][width * 2 + 2] = '|';
	ptr[1][width * 2 + 3] = '\0';
	return (ptr);
}

void print_map(int width, int height)
{
	char **pattern = get_map_pattern(width);

	for (int i = 0; i < height + 2; i++) {
		if (i == 0 || i == height + 1)
			mvprintw((LINES - height)  / 2 + i,
				(COLS - width) / 2, pattern[0]);
		else
			mvprintw((LINES - height)  / 2 + i,
				(COLS - width) / 2, pattern[1]);
	}
}
