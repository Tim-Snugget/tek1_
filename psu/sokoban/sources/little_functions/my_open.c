/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** my_open
*/

#include "sokoban.h"

int my_open(char *name)
{
	int fd;

	if (!name)
		my_xerror("the supposed name is a NULL string");
	fd = open(name, O_RDONLY);
	if (fd == -1) {
		perror("open");
		exit(84);
	}
	return (fd);
}
