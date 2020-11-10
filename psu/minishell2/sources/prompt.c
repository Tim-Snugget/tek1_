/*
** EPITECH PROJECT, 2018
** prompt.c
** File description:
** print a prompt
*/

#include "ms.h"

char *cut_current_dir(char *str)
{
	int i;
	int j = 0;
	char *dir;

	for (i = my_strlen(str); i > 0 && str[i] != '/'; i--);
	dir = my_malloc(my_strlen(str) - i + 1);
	while (str[i])
		dir[j++] = str[i++];
	dir[j] = '\0';
	my_free(str);
	return (dir);
}

void print_prompt()
{
	char *dir = getcwd(NULL, 0);

	dir = cut_current_dir(dir);
	my_putstr(dir);
	my_putstr(" ~~> ");
}
