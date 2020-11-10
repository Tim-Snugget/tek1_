/*
** EPITECH PROJECT, 2018
** my_open.c
** File description:
** open function handling failure
*/

#include "tetris.h"

int my_open(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1) {
		my_putstr(file);
		my_putstr(" : ");
		perror("open");
		exit(84);
	} else
		return (fd);
}
