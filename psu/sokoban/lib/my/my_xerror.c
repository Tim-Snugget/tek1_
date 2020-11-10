/*
** EPITECH PROJECT, 2018
** my_lib
** File description:
** my_xerror.c
*/

#include "my.h"

void my_xerror(char *c)
{
	my_print_err("Error : ");
	my_print_err(c);
	my_print_err("\n");
	exit(84);
}
