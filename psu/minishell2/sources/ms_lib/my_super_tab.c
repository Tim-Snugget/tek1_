/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** my super tab
*/

#include "ms.h"

char ***my_super_tab(char *str, char c1, char c2)
{
	char ***ptr;
	int cnt = count_char(str, c1) + 1;
	char **tmp = my_str_to_word_tab(str, c1);

	ptr = my_malloc(sizeof(char **) * cnt);
	my_memset(ptr, 0, sizeof(char **) * cnt);
	for (int i = 0; i < cnt; i++)
		ptr[i] = my_str_to_word_tab(tmp[i], c2);
	my_free_tab(tmp);
	return (ptr);
}

void my_free_super_tab(char ***ptr)
{
	for (int i = 0; ptr[i] != NULL; my_free_tab(ptr[i]), i++);
	my_free(ptr);
}
