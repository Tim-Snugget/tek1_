/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** do_action
*/

#include "sokoban.h"

void move_player_up(char **map, game_t *infos)
{
	coords_t tgt;

	tgt.x = infos->player->x;
	tgt.y = infos->player->y - 1;
	if (map[tgt.y][tgt.x] == '#')
		return;
	if (map[tgt.y][tgt.x] == 'X' &&
	map[tgt.y - 1][tgt.x] != '#' && map[tgt.y - 1][tgt.x] != 'X') {
		map[tgt.y - 1][tgt.x] = 'X';
		map[tgt.y][tgt.x] = 'P';
		map[infos->player->y][infos->player->x] = ' ';
		infos->player->y--;
	}
}

void move_player_down(char **map, game_t *infos)
{
	coords_t tgt;

	tgt.x = infos->player->x;
	tgt.y = infos->player->y + 1;
	if (map[tgt.y][tgt.x] == '#')
		return;
	if (map[tgt.y][tgt.x] == 'X' &&
	map[tgt.y + 1][tgt.x] != '#' && map[tgt.y + 1][tgt.x] != 'X') {
		map[tgt.y + 1][tgt.x] = 'X';
		map[tgt.y][tgt.x] = 'P';
		map[infos->player->y][infos->player->x] = ' ';
		infos->player->y++;
	}
}

void move_player_left(char **map, game_t *infos)
{
	coords_t tgt;

	tgt.x = infos->player->x - 1;
	tgt.y = infos->player->y;
	if (map[tgt.y][tgt.x] == '#')
		return;
	if (map[tgt.y][tgt.x] == 'X' &&
	map[tgt.y][tgt.x - 1] != '#' && map[tgt.y][tgt.x - 1] != 'X') {
		map[tgt.y][tgt.x - 1] = 'X';
		map[tgt.y][tgt.x] = 'P';
		map[infos->player->y][infos->player->x] = ' ';
		infos->player->x--;
	}
}

void move_player_right(char **map, game_t *infos)
{
	coords_t tgt;

	tgt.x = infos->player->x + 1;
	tgt.y = infos->player->y;
	if (map[tgt.y][tgt.x] == '#')
		return;
	if (map[tgt.y][tgt.x] == 'X' &&
	map[tgt.y][tgt.x + 1] != '#' && map[tgt.y][tgt.x + 1] != 'X') {
		map[tgt.y][tgt.x + 1] = 'X';
		map[tgt.y][tgt.x] = 'P';
		map[infos->player->y][infos->player->x] = ' ';
		infos->player->x++;
	}
}

void do_action(char **map, game_t *infos, int key)
{
	switch (key) {
	case KEY_UP: move_player_up(map, infos); break;
	case KEY_DOWN: move_player_down(map, infos); break;
	case KEY_LEFT: move_player_left(map, infos); break;
	case KEY_RIGHT: move_player_right(map, infos); break;
	default: return;
	}
}
