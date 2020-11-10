/*
** EPITECH PROJECT, 2018
** instruction.c
** File description:
** instruction functions
*/

#include "ms1.h"

bool is_built_in(char *arg)
{
	if (my_strcmp(arg, "cd") == 0 || my_strcmp(arg, "env") == 0 ||
	my_strcmp(arg, "setenv") == 0 || my_strcmp(arg,"unsetenv") == 0 ||
	my_strcmp(arg, "exit") == 0)
		return (true);
	else
		return (false);
}

bool is_proc(char *arg, Env *core)
{
	if (my_strncmp(arg, "./", 2) == 0)
		return (true);
	else if (check_binaries(arg, core) == true)
		return (true);
	else
		return (false);
}

void instruction(char **arr, Env *core)
{
	if (is_built_in(arr[0]) == true)
		exec_built_in(arr, core);
	else if (is_proc(arr[0], core) == true)
		exec_proc(arr, core);
	else {
		my_print_err(arr[0]);
		my_print_err(": Command not found.\n");
	}
	return;
}
