/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main my_sokoban
*/

#include "sokoban.h"

int main(int ac, char **av)
{
	char **map;
	game_t *infos;

	if (ac != 2)
		return (84);
	if (my_strcmp(av[1], "-h") == 0)
		print_help();
	map = get_map(av[1]);
	if (parse_map(map) == false)
		my_xerror("The map is not valid.");
	infos = get_game_infos(map, av[1]);
	play_game(infos, map);
	return (0);
}
