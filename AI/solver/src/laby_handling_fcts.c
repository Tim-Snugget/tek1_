/*
** EPITECH PROJECT, 2018
** dante - solver
** File description:
** laby handling functions
*/

#include "solver.h"

void display_map(char **map, coords_t *curs, bool *complete)
{
	int y = 0;

	map[curs->y][curs->x] = 'o';
	for (int x = 0; map[y] != NULL; x++) {
		if (map[y][x] == '\0' || map[y][x] == '\n') {
			x = 0;
			y++;
		} else if (map[y][x] == 'z')
			map[y][x] = '*';
	}
	for (y = 0; map[y]; printf("%s\n", map[y++]));
	*complete = true;
	map = NULL;
}

bool is_blocked(char **map, coords_t *curs, coords_t *obj)
{
	int crate = 0;

	if (map[curs->y + 1] == NULL || map[curs->y + 1][curs->x] != '*') {
		if (curs->x == obj->x && curs->y == obj->y)
			return (false);
		crate++;
	}
	if (curs->y == 0 || map[curs->y - 1][curs->x] != '*')
		crate++;
	if (map[curs->y][curs->x + 1] != '*')
		crate++;
	if (curs->x == 0 || map[curs->y][curs->x - 1] != '*')
		crate++;
	map[curs->y][curs->x] = 'z';
	if (crate == 4)
		return (true);
	else
		return (false);
}

void fill_dead_end(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (is_blocked(map, curs, obj) == false)
		return (explore(map, curs, obj, complete));
	if (map[curs->y][curs->x + 1] == 'o') {
		map[curs->y][curs->x++] = 'z';
		fill_dead_end(map, curs, obj, complete);
	}
	if (map[curs->y + 1] != NULL && map[curs->y + 1][curs->x] == 'o') {
		map[curs->y++][curs->x] = 'z';
		fill_dead_end(map, curs, obj, complete);
	}
	if (curs->x > 0 && map[curs->y][curs->x - 1] == 'o') {
		map[curs->y][curs->x--] = 'z';
		fill_dead_end(map, curs, obj, complete);
	}
	if (curs->y > 0 && map[curs->y - 1][curs->x] == 'o') {
		map[curs->y--][curs->x] = 'z';
		fill_dead_end(map, curs, obj, complete);
	}
}
