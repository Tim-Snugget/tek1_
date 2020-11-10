/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** handling pipes functions
*/

#include "ms.h"

bool is_pipes(char **arr)
{
	for (int i = 0; arr[i]; i++)
		if (my_strcmp(arr[i], "|") == 0)
			return (true);
	return (false);
}

void do_pipes_instructions(char **arr, env_t *core)
{
	ll_t *instr = get_linked_instructions(arr);

	if (!instr)
		return;
	my_puts("pipes?");
	(void)core;
}
