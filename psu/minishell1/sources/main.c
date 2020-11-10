/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main of the ms1
*/

#include "ms1.h"

bool loop_ms1(Env *core)
{
	char *buf = NULL;
	char **arr;

	print_prompt();
	buf = get_next_line(0);
	if (buf && my_empty_line(buf) == true) {
		my_free(buf);
		return (true);
	}
	if (!buf) {
		my_putchar('\n');
		buf = my_strdup("exit");
	}
	buf = my_epurstr(buf);
	arr = my_str_to_word_tab(buf, ' ');
	instruction(arr, core);
	my_free_tab(arr);
	return (true);
}

int main(int ac, char **av, char **ae)
{
	bool t = true;
	Env *core = my_malloc(sizeof(Env));

	(void)av;
	core = init_core(ae);
	if (ac != 1)
		return (84);
	while (t == true)
		t = loop_ms1(core);
	destroy_env(core);
	return (0);
}
