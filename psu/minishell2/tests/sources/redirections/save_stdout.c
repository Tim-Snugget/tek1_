/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** save stdout
*/

#include "ms.h"

bool is_save_stdout(char **arr)
{
	for (int i = 0; arr[i]; i++)
		if (strcmp(arr[i], ">") == 0)
			return (true);
	return (false);
}

char *get_target_red(char **arr)
{
	int i = 0;

	for (i = 0; arr[i] && is_redirection(arr[i]) == false; i++);
	if (arr[i] == NULL)
		return (NULL);
	else
		return (strdup(arr[i + 1]));
}

char **get_exec_inst(char **arr)
{
	char **ptr = malloc(sizeof(char *) * (my_array_size_c(arr) - 1));
	int i;
	int j;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; arr[i] && is_redirection(arr[i]) == false; i++)
		ptr[i] = strdup(arr[i]); //verif strdup
	for (j = i + 2; arr[j] != NULL; ptr[i++] = strdup(arr[j++]));
	ptr[j] = NULL;
	return (ptr);
}

void save_into_file(char **arr, env_t *core)
{
	char *target = get_target_red(arr);
	char **exec_inst = get_exec_inst(arr);
	int pid;
	int status;
	int fd;
	mode_t modes = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (target == NULL || exec_inst == NULL) {
		my_free(target);
		my_free_tab(exec_inst);
		return;
	}
	pid = fork();
	if (pid == -1) {
		my_free(target);
		my_free_tab(exec_inst);
		return;
	} else if (pid == 0) {
		fd = open(target, O_RDWR | O_TRUNC | O_CREAT, modes);
		dup2(fd, STDOUT_FILENO);
		close(fd);
	        execve(exec_inst[0], exec_inst, core->env);
		// verif open and exv, if failed, kill the child \(^w^)/
	}
	waitpid(pid, &status, 0);
	my_free(target);
	my_free_tab(exec_inst);
}
