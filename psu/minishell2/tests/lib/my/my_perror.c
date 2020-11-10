/*
** EPITECH PROJECT, 2018
** my_perror.c
** File description:
** attempt to reproduce the perror use
*/

#include "my.h"

void my_perror(char *name)
{
	perror(name);
	my_print_err("\b.\n");
}
