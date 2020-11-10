/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** redirections basic functions
*/

#include "ms.h"

bool is_redirection(char *s)
{
	if (my_strcmp(s, ">") == 0 || my_strcmp(s, ">>") == 0)
		return (true);
	else if (my_strcmp(s, "<") == 0 || my_strcmp(s, "<<") == 0)
		return (true);
	else
		return (false);
}

bool is_form_redirections(char **arr)
{
	int cnt[2] = {0, 0};

	for (int i = 0; arr[i]; i++) {
		if (is_redirection(arr[i]) == true && \
(arr[i + 1] == NULL || is_redirection(arr[i + 1]) == true))
			return (return_error_red(1));
		if ((my_strcmp(arr[i], ">") || my_strcmp(arr[i], ">>")) == 0)
			cnt[0]++;
		if ((my_strcmp(arr[i], "<") || my_strcmp(arr[i], "<<")) == 0)
			cnt[1]++;
	}
	if (cnt[0] > 1 || cnt[1] > 1)
		return (return_error_red(2));
	else if (cnt[0] == 1 || cnt[1] == 1)
		return (true);
	else
		return (false);
}

void do_redirection_instructions(char **arr, env_t *core)
{
	if (is_form_redirections(arr) == false)
		return;
	if (is_save_stdout(arr) == true)
		save_into_file(arr, core);
	if (is_append_stdout(arr) == true)
		append_into_file(arr, core);
	/* if (is_select_intput(arr) == true) */
	/* 	select_stdin(arr, core); */
	//certainly temporary, cuz this is shit
}
