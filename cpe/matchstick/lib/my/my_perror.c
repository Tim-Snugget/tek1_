/*
** EPITECH PROJECT, 2018
** my_perror.c
** File description:
** attempt to reproduce the perror use
*/

#include "my.h"

void my_perror(char *fcn, char *error)
{
	my_print_err(fcn);
	my_print_err(": ");
	my_print_err(error);
	my_print_err(".\n");
}
