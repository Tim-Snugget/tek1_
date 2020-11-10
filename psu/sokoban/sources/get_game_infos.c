/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** get game infos
*/

#include "sokoban.h"

coords_t *get_player_pos(char **map)
{
	coords_t *t = my_malloc(sizeof(*t));

	for (t->y = 0; map[t->y] != NULL; t->y++) {
		for (t->x = 0; map[t->y][t->x] != 'P' &&
			map[t->y][t->x] != '\0'; t->x++);
		if (map[t->y][t->x] != '\0')
			return (t);
	}
	my_xerror("get_player_pos : no player found on the map");
	return (NULL);
}

int get_nb_slots(char **map)
{
	int cnt = 0;

	for (int i = 0; map[i]; i++)
		for (int j = 0; map[i][j] != '\0'; j++)
			cnt += count_slots(map[i][j]);
	return (cnt);
}

coords_t *get_next_slot(char **map, coords_t *tmp)
{
	coords_t *copy = my_malloc(sizeof(coords_t));

	while (map[tmp->y] != NULL) {
		while (map[tmp->y][tmp->x] != 'O' && map[tmp->y][tmp->x])
			tmp->x++;
		if (map[tmp->y][tmp->x] == 'O') {
			copy->x = tmp->x;
			copy->y = tmp->y;
			return (copy);
		}
		tmp->y++;
		tmp->x = 0;
	}
	return (NULL);
}

coords_t **get_slots(char **map, int nb_slots)
{
	int cnt = 0;
	coords_t **ptr = my_malloc(sizeof(coords_t *) * (nb_slots + 1));
	coords_t *tmp = my_malloc(sizeof(*tmp));

	tmp->x = 0;
	tmp->y = 0;
	my_memset(ptr, 0, sizeof(coords_t *) * (nb_slots + 1));
	while (cnt != nb_slots)
		ptr[cnt++] = get_next_slot(map, tmp);
	my_free(tmp);
	return (ptr);
}

game_t *get_game_infos(char **map, char *name)
{
	game_t *ptr = my_malloc(sizeof(*ptr));

	ptr->player = get_player_pos(map);
	ptr->slots = get_slots(map, get_nb_slots(map));
	ptr->map_name = my_strdup(name);
	ptr->nb_crates = 0;
	for (int i = 0; map[i]; i++)
		for (int j = 0; map[i][j]; j++)
			ptr->nb_crates += count_crates(map[i][j]);
	return (ptr);
}
