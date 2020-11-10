/*
** EPITECH PROJECT, 2018
** navy : second_player
** File description:
** fct for the second player
*/

#include "printf.h"
#include "navy.h"
#include "my.h"

int second_player(char *map_file)
{
	char **map = get_map(map_file);
	char **enn_map = init_map();

	if (map == NULL)
		return (84);
	my_printf("my_pid: %d\n", getpid());
	if (kill(sonar.corres, SIGUSR2) == -1)
		return (84);
	else
		my_putstr("successfully connected\n\n");
	sonar.index = 0;
	sonar.tmp = -1;
	if (loop_game_sp(map, enn_map) == 84)
		return (84);
	return (0);
}
