/*
** EPITECH PROJECT, 2017
** files.c
** File description:
** files handling
*/

#include "ls_my.h"

int check_files(char **av, int ac)
{
	int x = 1;

	while (x != ac) {
		if (identify_type(av[x]) == -1)
			return (1);
		x++;
	}
	return (0);
}

void display_files(list_opt_t *options, char **av, int ac)
{
	int x = 1;

	while (x != ac) {
		if (identify_type(av[x]) == -1) {
			my_ls(options, av[x]);
			my_putchar('\n');
		}
		x++;
	}
}
