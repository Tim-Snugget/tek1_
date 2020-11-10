/*
** EPITECH PROJECT, 2018
** loop_game_second_player
** File description:
** the second player 's loop game
*/

#include "navy.h"
#include "my.h"

int loop_game_sp(char **my_map, char **enn_map)
{
	int loop = 0;

	while (1) {
		if (loop == 0) {
			my_putstr("my positions:\n");
			print_map(my_map);
			my_putstr("\nenemy's positions:\n");
			print_map(enn_map);	
			defend(my_map);
		}
		loop = attack(enn_map);
		if (loop == 84)
			return (84);
	}
	return (0);
}
