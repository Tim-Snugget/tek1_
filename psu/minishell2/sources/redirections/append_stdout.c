/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** append the stdout in a file
*/

#include "ms.h"

bool is_append_stdout(char **arr)
{
	for (int i = 0; arr[i]; i++)
		if (strcmp(arr[i], ">") == 0)
			return (true);
	return (false);
}

void append_into_file(char **arr, env_t *core)
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
		fd = open(target, O_RDWR | O_APPEND | O_CREAT, modes);
		dup2(fd, STDOUT_FILENO);
		close(fd);
	        execve(exec_inst[0], exec_inst, core->env);
		// verif open and exv, if failed, kill the child \(^w^)/
	}
	waitpid(pid, &status, 0);
	my_free(target);
	my_free_tab(exec_inst);
}
