/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** instructions, with redirects in it
*/

#include "ms.h"








/* char **get_inst_red_start(char **arr) */
/* { */
/* 	char **ptr; */
/* 	int i; */

/* 	for (i = 0; arr[i] && my_strcmp(arr[i], "|") && my_strcmp(arr[i], "<") */
/* 		&& my_strcmp(arr[i], "<<") && my_strcmp(arr[i], ">") && */
/* 		my_strcmp(arr[i], ">>"); i++); */
/* 	if (!arr[i]) { */
/* 		my_print_err("get instruction red start failed"); */
/* 		exit(84); */
/* 	} */
/* 	ptr = my_malloc(sizeof(char *) * (i + 1)); */
/* 	for (int t = 0; t != i; ptr[t] = my_strdup(arr[t]), t++); */
/* 	ptr[i] = NULL; */
/* 	return (ptr); */
/* } */

/* char **get_inst_red_end(char **arr) */
/* { */
/* 	char **ptr; */
/* 	int i; */
/* 	int j; */

/* 	for (i = 0; arr[i] && my_strcmp(arr[i], "|") && my_strcmp(arr[i], "<") */
/* 		&& my_strcmp(arr[i], "<<") && my_strcmp(arr[i], ">") && */
/* 		my_strcmp(arr[i], ">>"); i++); */
/* 	if (!arr[i]) { */
/* 		my_print_err("get instruction red end failed"); */
/* 		exit(84); */
/* 	} */
/* 	for (j = ++i; arr[j] && my_strcmp(arr[j], "|") && */
/* 		my_strcmp(arr[j], "<") && my_strcmp(arr[j], "<<") && */
/* 		my_strcmp(arr[j], ">") && my_strcmp(arr[j], ">>"); j++); */
/* 	ptr = my_malloc(sizeof(char *) * (j - i)); */
/* 	for (int t = 0; t != j - i; ptr[t] = my_strdup(arr[i + t]), t++); */
/* 	ptr[j - i] = NULL; */
/* 	return (ptr); */
/* } */

/* void redirect_instruction(char **arr, env_t *core) */
/* { */
/* 	char ***stab; */

/* 	if (check_all_instructions(arr, core) == false) */
/* 		return; */
/* 	stab = get_tab_to_tab(arr, "|"); */
/* } */


	/* int port[2]; */
	/* int pid; */
	/* char **tmp; */
	/* int status; */

	/* pipe(port); */
	/* pid = fork(); */
	/* if (pid == -1) { */
	/* 	perror("fork"); */
	/* 	return; */
	/* } else if (pid == 0) { */
	/* 	close(port[READ_END]); */
	/* 	if (dup2(port[WRITE_END], STDOUT_FILENO) == -1) { */
	/* 		perror("dup2.1"); */
	/* 		return; */
	/* 		/\* error and kill ??? *\/ */
	/* 	} */
	/* 	tmp = get_inst_red_start(arr); */
	/* 	instruction(tmp, core); */
	/* 	my_free_tab(tmp); */
	/* 	kill(getpid(), SIGKILL); */
	/* } */
	/* waitpid(pid, &status, 0); */
	/* close(port[WRITE_END]); */
	/* if (dup2(port[READ_END], STDIN_FILENO) == -1) { */
	/* 	perror("dup2.2"); */
	/* 	return; */
	/* } */
	/* tmp = get_inst_red_end(arr); */
	/* instruction(tmp, core); */
	/* my_free_tab(tmp); */
	/* close(port[READ_END]); */
