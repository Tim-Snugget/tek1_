/*
** EPITECH PROJECT, 2018
** instruction.c
** File description:
** instruction functions
*/

#include "ms.h"

void instruction(char **arr, env_t *core)
{
	if (is_form_redirections(arr) == true)
		return (do_redirection_instructions(arr, core));
	if (is_pipes(arr) == true)
		return (do_pipes_instructions(arr, core));
	if (is_built_in(arr[0]) == true)
		exec_built_in(arr, core);
	else if (is_proc(arr[0], core) == true)
		exec_proc(arr, core);
	else {
		my_print_err(arr[0]);
		my_print_err(": Command not found.\n");
	}
	return;
}
