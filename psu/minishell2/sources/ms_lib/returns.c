/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** return fcts
*/

#include "ms.h"

int return_null_command(void)
{
	my_print_err("Invalid null command.\n");
	return (-1);
}

bool return_error_red(int err)
{
	switch (err) {
	case 1: my_print_err("Missing name for redirect.\n"); break;
	case 2: my_print_err("Ambiguous output redirect.\n"); break;
	}
	return (false);
}
