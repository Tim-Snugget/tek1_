/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main of the ms
*/

#include "ms.h"

bool loop_ms(env_t *core)
{
	char *buf = NULL;
	char ***arr;

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
	arr = my_super_tab(buf, ';', ' ');
	for (int i = 0; arr[i] != NULL; i++)
		instruction(arr[i], core);
	my_free_super_tab(arr);
	return (true);
}

int main(int ac, char **av, char **ae)
{
	bool t = true;
	env_t *core = my_malloc(sizeof(env_t));

	(void)av;
	core = init_core(ae);
	if (ac != 1)
		return (84);
	while (t == true)
		t = loop_ms(core);
	destroy_env(core);
	return (0);
}
