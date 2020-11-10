/*
** EPITECH PROJECT, 2018
** my_xerror.c
** File description:
** put a given string into the error output
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_xerror(char *c)
{
	my_print_err("Error:  ");
	if (c != NULL)
		write(2, c, my_strlen(c));
	my_putchar('\n');
	exit(84);
}
