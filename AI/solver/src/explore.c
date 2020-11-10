/*
** EPITECH PROJECT, 2018
** dante - solver
** File description:
** explore
*/

#include "solver.h"

void explore_right(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (map[curs->y][curs->x + 1] == '*') {
		map[curs->y][curs->x] = 'o';
		curs->x++;
		explore(map, curs, obj, complete);
	}
}

void explore_down(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (map[curs->y + 1] != NULL && map[curs->y + 1][curs->x] == '*') {
		map[curs->y][curs->x] = 'o';
		curs->y++;
		explore(map, curs, obj, complete);
	}
}

void explore_left(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (curs->x > 0 && map[curs->y][curs->x - 1] == '*') {
		map[curs->y][curs->x] = 'o';
		curs->x--;
		explore(map, curs, obj, complete);
	}
}

void explore_up(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (curs->y > 0 && map[curs->y - 1][curs->x] == '*') {
		map[curs->y][curs->x] = 'o';
		curs->y--;
		explore(map, curs, obj, complete);
	}
}

void explore(char **map, coords_t *curs, coords_t *obj, bool *complete)
{
	if (curs->x == obj->x && curs->y == obj->y)
		return (display_map(map, curs, complete));
	if (is_blocked(map, curs, obj) == true)
		fill_dead_end(map, curs, obj, complete);
	explore_right(map, curs, obj, complete);
	explore_down(map, curs, obj, complete);
	explore_left(map, curs, obj, complete);
	explore_up(map, curs, obj, complete);
}
