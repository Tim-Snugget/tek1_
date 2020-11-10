/*
** EPITECH PROJECT, 2018
** check_binaries.c
** File description:
** binaries
*/

#include "ms1.h"

bool check_env_path_bin(Env *core, char *arg)
{
	char **tab;
	size_t i;

	for (i = 0; i < core->env_size; i++)
		if (my_strncmp(core->env[i], "PATH=", 5) == 0)
			break;
	if (core->env[i] == NULL)
		return (false);
	tab = my_str_to_word_tab(my_substr(core->env[i], 5,
					my_strlen(core->env[i]) - 5), ':');
	if (tab == NULL)
		return (false);
	for (i = 0; tab[i] != NULL; i++)
		if (access(my_strcat_s(tab[i], arg, '/'), F_OK) == 0)
			return (true);
	return (false);
}

bool check_binaries(char *arg, Env *core)
{
	if (access(arg, F_OK) == 0 && access(arg, X_OK) == 0)
		return (true);
	if (arg[0] == '/' || my_strncmp(arg, "./", 2) == 0) {
		if (access(arg, F_OK) == 0)
			return (true);
		else
			return (false);
	}
	for (int i = 0; i < 6; i++)
		if (access(my_strcat_s(core->path[i], arg, '/'), F_OK) == 0)
			return (true);
	if (check_env_path_bin(core, arg) == true)
		return (true);
	return (false);
}

void exec_err(char *name)
{
	my_print_err(name);
	if (errno == EACCES)
		my_print_err(": Permission denied.\n");
	else if (errno == ENOEXEC)
		my_print_err(": Exec format error. Wrong architecture.\n");
	else
		perror(name);
}
