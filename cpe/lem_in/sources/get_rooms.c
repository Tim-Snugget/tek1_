/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** get_rooms
*/

#include "lemin.h"

room_t *get_tmp_infos(char *room, char *prev_line)
{
	int index;
	room_t *ptr = malloc(sizeof(room_t));

	if (!ptr)
		return (NULL);
	if (my_strcmp(prev_line, "##start\n") == 0)
		ptr->type = 0;
	else if (my_strcmp(prev_line, "##end\n") == 0)
		ptr->type = 1;
	else
		ptr->type = 2;
	for (index = 0; room[index] != ' '; index++);
	ptr->name = my_malloc(sizeof(char) * (index + 1));
	my_memset(ptr->name, '\0', sizeof(char) * (index + 1));
	for (int i = 0; i < index; ptr->name[i] = room[i], i++);
	ptr->coords = my_malloc(sizeof(pos_t));
	ptr->coords->x = my_getnbr(&room[index]);
	for (index = index + 1; room[index] != ' '; index++);
	ptr->coords->y = my_getnbr(&room[index]);
	return (ptr);
}

room_t **get_rooms(void)
{
	room_t **crate;
	char **params = get_params();

	if (params == NULL)
		return (NULL);	
	crate = malloc(sizeof(room_t *) * (count_rooms(params) + 1));
	if (!crate)
		return (NULL);
	crate[count_rooms(params)] = NULL;
	for (int i = 0, cnt = 0; params[i]; i++)
		if (params[i][0] != '#' && count_words(params[i]) == 3)
			crate[cnt++] = get_tmp_infos(params[i], params[i - 1]);
	if (verify_rooms(crate, params) == false) {
		for (int i = 0; params[i]; my_free(params[i]), i++);
		return (free_rooms(crate));
	}
	return (crate);
}
