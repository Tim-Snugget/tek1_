/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** reset functions
*/

#include "sokoban.h"

char **reset_map(char **map, char *map_name)
{
	for (int i = 0; map[i]; my_free(map[i]), i++);
	my_free(map);
	return (get_map(map_name));
}

game_t *reset_infos(game_t *infos)
{
	game_t *new_ptr = my_malloc(sizeof(game_t));

	new_ptr->slots = infos->slots;
	new_ptr->map_name = infos->map_name;
	new_ptr->nb_crates = infos->nb_crates;
	my_free(infos->player);
	my_free(infos);
	return (new_ptr);
}
