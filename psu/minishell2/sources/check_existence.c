/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** check if the file xx instr exists
*/

#include "ms.h"

bool is_built_in(char *arg)
{
        if (my_strcmp(arg, "cd") == 0 || my_strcmp(arg, "env") == 0 ||
        my_strcmp(arg, "setenv") == 0 || my_strcmp(arg,"unsetenv") == 0 ||
        my_strcmp(arg, "exit") == 0)
                return (true);
        else
                return (false);
}

bool is_proc(char *arg, env_t *core)
{
        if (my_strncmp(arg, "./", 2) == 0)
                return (true);
        else if (check_binaries(arg, core) == true)
                return (true);
	else
                return (false);
}

bool check_existence(char *name, env_t *core)
{
	if (is_built_in(name) == true || is_proc(name, core) == true)
		return (true);
	else
		return (false);
}
