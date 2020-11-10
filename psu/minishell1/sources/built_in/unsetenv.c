/*
** EPITECH PROJECT, 2018
** unsetenv.c
** File description:
** unset the env
*/

#include "ms1.h"

char **modify_to_unsetenv(Env *core, char *unset)
{
	size_t i;

	for (i = 0; i < core->env_size; i++)
		if (strncmp(core->env[i], unset, my_strlen(unset)) == 0
		&& core->env[i][my_strlen(unset)] == '=')
			break;
	if (i != core->env_size) {
		while (i <= core->env_size - 2) {
			core->env[i] = core->env[i + 1];
			i++;
		}
		core->env[core->env_size - 1] = NULL;
		core->env_size--;
	}
	return (core->env);
}

void unset_env(Env *core, char **arr)
{
	int arr_size = my_array_size_c(arr);

	if (arr_size == 1)
		my_print_err("unsetenv:  Too few_arguments.\n");
	else
		for (int i = 1; i != arr_size; i++)
			modify_to_unsetenv(core, arr[i]);
}
