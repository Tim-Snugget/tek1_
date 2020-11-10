/*
** EPITECH PROJECT, 2018
** setenv.c
** File description:
** set the env
*/

#include "ms1.h"

int is_set_variable(char *arg, Env *core)
{
	int len = my_strlen(arg);

	for (size_t i = 0; i < core->env_size; i++)
		if (core->env[i] != NULL &&
		my_strncmp(arg, core->env[i], len) == 0 &&
		core->env[i][len] == '=')
			return (i);
	return (-1);
}

char *set_new_env_var(char **arr, int arg_size)
{
	char *ptr = NULL;

	if (arg_size == 2) {
		ptr = my_malloc(sizeof(char) * (my_strlen(arr[1]) + 2));
		my_memset(ptr, '\0', sizeof(char) * (my_strlen(arr[1]) + 2));
		my_strcpy(ptr, arr[1]);
		ptr[my_strlen(arr[1])] = '=';
	} else if (arg_size == 3)
		ptr = my_strcat_s(arr[1], arr[2], '=');
	return (ptr);
}

char **add_env_var(Env *core, char *var)
{
	char **tmp = my_malloc(sizeof(char *) * (core->env_size + 2));

	my_memset(tmp, 0, sizeof(char *) * (core->env_size + 2));
	copy_env(tmp, core->env, core->env_size);
	tmp[core->env_size] = my_malloc(sizeof(char) * (my_strlen(var) + 1));
	for (int i = 0; i < my_strlen(var); i++)
		tmp[core->env_size][i] = var[i];
	tmp[core->env_size][my_strlen(var)] = '\0';
	core->env_size++;
	my_free(var);
	return (tmp);
}

void modify_to_setenv(char **arr, int arg_size, Env *core)
{
	int crate;
	char *new_env_var;

	if (check_validity_arg_se(arr[1]) == false) {
		my_print_err("setenv: Variable name must contain ");
		my_print_err("alphanumeric characters.\n");
		return;
	}
	new_env_var = set_new_env_var(arr, arg_size);
	crate = is_set_variable(arr[1], core);
	if (crate != -1) {
		my_free(core->env[crate]);
		core->env[crate] = new_env_var;
	} else
		core->env = add_env_var(core, new_env_var);
	return;	
}

void select_set_env(Env *core, char **arr)
{
	int arg_size = my_array_size_c(arr);

	if (arg_size == 1)
		disp_env(core);
	else if (arg_size > 3)
		my_print_err("setenv:  Too many arguments.\n");
	else
		modify_to_setenv(arr, arg_size, core);
}
