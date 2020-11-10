/*
** EPITECH PROJECT, 2018
** check_add_to_env_ut.c
** File description:
** check add to env - unit test
*/

#include <criterion/criterion.h>
#include "ms1.h"



Test(check_add_to_env, check_add_to_env)
{
	char **foo;
	char *s = my_strdup("setenv Star Wars");
	char **bar;

	bar = my_malloc(sizeof(char*) * 4);
	bar[0] = my_strdup("Luke");
	bar[1] = my_strdup("Je suis");
	bar[2] = my_strdup("Ton pere");
	bar[3] = NULL;
	foo = my_str_to_word_tab(s, ' ');
	bar = add_to_env(foo, my_array_size_c(foo), bar);
	cr_assert_str_eq(bar[0], "Luke");
	cr_assert_str_eq(bar[1], "Je suis");
	cr_assert_str_eq(bar[2], "Ton pere");
	cr_assert_str_eq(bar[3], "Star=Wars");
	my_free(s);
	my_free_tab(foo);
	my_free_tab(bar);
}
