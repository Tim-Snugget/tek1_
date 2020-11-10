/*
** EPITECH PROJECT, 2018
** cd.c
** File description:
** change directory function
*/

#include "ms1.h"

char *get_new_olddir(char *oldDir)
{
	if (oldDir != NULL)
		my_free(oldDir);
	oldDir = getcwd(NULL, 0);
	return (oldDir);
}

char *change_to_olddir(char *oldDir, char *arg1)
{
	my_free(arg1);
	arg1 = my_strdup(oldDir);
	my_free(oldDir);
	oldDir = NULL;
	oldDir = getcwd(NULL, 0);
	return (arg1);
}

char *goto_home(char *arg1)
{
	if (arg1 == NULL)
		return (NULL);
	if (arg1 != NULL)
		my_free(arg1);
	arg1 = my_strdup("/home/tfertin");
	return (arg1);
}

void my_chdir(char **arr, Env *core)
{
	int val;
	int i;

	if (arr[1] == NULL)
		val = chdir("/home/tfertin");
	else
		val = chdir(arr[1]);
	if (val == -1) {
		cd_error(arr[1]);
		return;
	}
	for (i = 0; my_strncmp(core->env[i], "PWD=", 4) != 0 &&
		core->env[i]; i ++);
	core->env[i] = NULL;
	core->env[i] = my_strdup(my_strcat_s("PWD", getcwd(NULL, 0), '='));
}

void change_directory(char **arr, Env *core)
{
	int array_size = my_array_size_c(arr);
	static char *oldDir = NULL;

	if (array_size > 2)
		my_print_err("cd: Too many arguments.\n");
	if (array_size == 2 && my_strcmp(arr[1], "-") == 0) {
		if (oldDir == NULL) {
			my_print_err(": No such file or directory.\n");
			return;
		} else
			arr[1] = change_to_olddir(oldDir, arr[1]);
	} else if (array_size == 1 ||
		(array_size == 2 && my_strcmp(arr[1], "~") == 0)) {
		oldDir = get_new_olddir(oldDir);
		arr[1] = goto_home(arr[1]);
	} else
		oldDir = get_new_olddir(oldDir);
	my_chdir(arr, core);
}
