/*
** EPITECH PROJECT, 2018
** navy : main
** File description:
** main fct
*/

#include "navy.h"
#include "my.h"

Mem_card sonar;

int main(int ac, char **av)
{
	if (ac == 2)
		if (my_strcmp(av[1], "-h") == 0)
			display_usage();
		else
			return (first_player(av[1]));
	else if (ac == 3) {
		sonar.corres = check_pid(av[1]);
		if (sonar.corres == -1)
			return (84);
		return (second_player(av[2]));
	} else
		return (84);
	return (0);
}
