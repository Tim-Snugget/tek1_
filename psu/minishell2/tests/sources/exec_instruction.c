/*
** EPITECH PROJECT, 2018
** exec_instruction.c
** File description:
** execute the given instruction
*/

#include "ms.h"

void exec_built_in(char **arr, env_t *core)
{
	switch (arr[0][0]) {
	case 'c': change_directory(arr, core); break;
	case 's': select_set_env(core, arr); break;
	case 'u': unset_env(core, arr); break;
	case 'e': switch (arr[0][1]) {
		case 'n': disp_env(core); break;
		case 'x': exit_mysh(arr); break;
		default: return;
		}; break;
	}
}

char *get_exec_full_name(char *arg, char **path)
{
	char *crate;

	if ((access(arg, F_OK) == 0 && access(arg, X_OK) == 0) ||
	arg[0] == '/' || my_strncmp(arg, "./", 2) == 0)
		return (arg);
	for (int i = 0; i < 6; i++) {
		crate = my_strcat_s(path[i], arg, '/');
		if (access(crate, F_OK) == 0) {
			my_free(arg);
			return (crate);
		}
		my_free(crate);
	}
	return (arg);
}

void print_prog_problem(int status)
{
	switch (status) {
	case 136: my_print_err("Floating exception (core dumped)\n"); break;
	case 139: my_print_err("Segmentation fault (core dumped)\n"); break;
	case 134: my_print_err("Aborted (core dumped)\n"); break;
	case 255: my_print_err("Timeout\n"); break;
	}
}

void exec_proc(char **arr, env_t *core)
{
	int pid;
	int status;

	if (my_strncmp("./", arr[0], 2) != 0)
		arr[0] = get_exec_full_name(arr[0], core->path);
	pid = fork();
	if (pid < 0)
		exit(1);
	else if (pid > 0) {
		waitpid(pid, &status, 0);
		if (status > 2)
			print_prog_problem(status);
		return;
	} else
		if (execve(arr[0], arr, core->env) == -1) {
			exec_err(arr[0]);
			my_kill(getpid(), SIGKILL);
		}
}
