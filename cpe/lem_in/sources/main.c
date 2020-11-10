/*
** EPITECH PROJECT, 2018
** lem_in
** File description:
** main
*/

#include "lemin.h"

int main(int ac, char **av)
{
	room_t **rooms;

	(void)av;
	if (ac != 1)
		return (84);
	rooms = get_rooms();
	if (rooms == NULL)
		return (84);
	free_rooms(rooms);
	my_puts("this is te end of the lem in");
	return (0);
}
