/*
** EPITECH PROJECT, 2018
** my_env_fctns.c
** File description:
** modify my env, stocked into the (env_t) core structure
*/

#include "ms.h"

void disp_env(env_t *core)
{
	for (size_t i = 0; i < core->env_size; i++) {
		if (core->env == NULL)
			continue;
		else
			my_puts(core->env[i]);
	}
}

void copy_env(char **dest, char **env, size_t size)
{
	for (size_t i = 0; i < size; i++)
		dest[i] = my_strdup(env[i]);
}

env_t *init_core(char **env)
{
	env_t *tmp = my_malloc(sizeof(env_t));

	for (tmp->env_size = 0; env[tmp->env_size] != NULL; tmp->env_size++);
	tmp->env = my_malloc(sizeof(char *) * (tmp->env_size + 1));
	my_memset(tmp->env, 0, (tmp->env_size + 1));
	copy_env(tmp->env, env, tmp->env_size);
	tmp->env[tmp->env_size] = NULL;
	tmp->path = my_malloc(sizeof(char *) * 6);
	tmp->path[0] = "/usr/local/bin";
	tmp->path[1] = "/usr/bin";
	tmp->path[2] = "/bin";
	tmp->path[3] = "/home/tfertin/bin";
	tmp->path[4] = "/usr/local/sbin";
	tmp->path[5] = "/usr/sbin";
	return (tmp);
}

void destroy_env(env_t *core)
{
	my_free(core->env);
	my_free(core->path);
	my_free(core);
}

bool check_validity_arg_se(char *arg)
{
	for (int i = 0; arg[i]; i++)
		if (arg[i] < '0' || (arg[i] > '9' && arg[i] < 'A') ||
		(arg[i] > 'Z' && arg[i] != '_' && arg[i] < 'a') ||
		arg[i] > 'z')
			return (false);
	return (true);
}
