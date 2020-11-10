/*
** EPITECH PROJECT, 2018
** navy : loop_game_fp
** File description:
** gaming loop
*/

#include "navy.h"
#include "my.h"

#include "printf.h"

int check_win_lose()
{
	if (sonar.end_my == 14) {
		my_putstr("I won\n");
		return (0);
	} else if (sonar.end_en == 14) {
		my_putstr("Enemy won\n");
		return (1);
	} else 
		return (-1);
}

int loop_game_fp(char **my_map, char **enn_map)
{
	int loop = 0;
	int end = -1;

	while (true) {
		if (loop == 0) {
			my_putstr("my positions:\n");
			print_map(my_map);
			my_putstr("\nenemy's positions:\n");
			print_map(enn_map);
		}
		loop = attack(enn_map);
		if (loop == 84)
			return (84);
		else if (loop == 0)
			defend(my_map);
		end = check_win_lose();
		if (end == 1 || end == 0)
			return (end);
	}
	return (0);
}
