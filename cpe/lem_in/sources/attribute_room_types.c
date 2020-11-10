/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** attribute the type of the room
*/

#include "lemin.h"

void set_default_type_rooms(room_t **rooms)
{
	for (int i = 0; rooms[i]; rooms[i]->type = 1, i++);
}

void attribute_start_room(room_t **rooms, char *buf)
{
	char *name = get_word(buf);
	int i;

	for (i = 0; rooms[i] && my_strcmp(rooms[i]->name, name); i++);
	if (rooms[i] != NULL)
		rooms[i]->type = 0;
}

void attribute_end_room(room_t **rooms, char *buf)
{
	char *name = get_word(buf);
	int i;

	for (i = 0;  rooms[i] && my_strcmp(name, rooms[i]->name); i++);
	if (rooms[i] != NULL)
		rooms[i]->type = 2;
}

bool attribute_room_types(room_t **rooms, char **params)
{
	int i;
	int j;

	set_default_type_rooms(rooms);
	for (i = 0; params[i] && my_strcmp(params[i], "##start\n"); i++);
	if (!params[i])
		return (false);
	for (j = i + 1; params[j] && my_strcmp(params[j], "##start\n"); j++);
	if (params[j] != NULL)
		return (false);
	attribute_start_room(rooms, params[i + 1]);
	for (i = 0; params[i] && my_strcmp(params[i], "##end\n") != 0; i++);
	if (!params[i])
		return (false);
	for (j = i + 1; params[j] && my_strcmp(params[j], "##end\n"); j++);
	if (params[j] != NULL)
		return (false);
	attribute_end_room(rooms, params[i + 1]);
	return (true);
}
