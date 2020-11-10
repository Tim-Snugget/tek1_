/*
** EPITECH PROJECT, 2018
** get_exec_full_name_tests.c
** File description:
** gefn - Unit Tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ms1.h"

char *get_exec_full_name(char *arg, char **ae);

char **get_bin_path(void)
{
	char **ptr = my_malloc(sizeof(char*) * 4);
	char *s1 = my_malloc(78);
	char *s2 = ":/usr/local/sbin:/usr/sbin";

	my_strcat(s1, "PATH=/usr/local/bin:/usr/bin:/bin:/home/tfertin/bin");
	my_memset(ptr, 0, 7);
	ptr[0] = my_strdup("this is nothiiing");
	ptr[1] = my_strdup("I don't know what the write here");
	ptr[2] = my_strdup(my_strcat(s1, s2));
	return (ptr);
}

Test(get_exec_full_name_test, test_the_return_of_the_function)
{
	char *ls = my_strdup("ls");
	char *echo = my_strdup("echo");
	char *ip = my_strdup("ip");
	char *nope = my_strdup("nope");
	char **ae = get_bin_path();

	cr_assert_str_eq(get_exec_full_name(ip, ae), "/usr/sbin/ip");
	cr_assert_str_eq(get_exec_full_name(echo, ae), "/usr/bin/echo");
	cr_assert_str_eq(get_exec_full_name(ls, ae), "/usr/bin/ls");
	cr_assert_null(get_exec_full_name(nope, ae));
	my_free(ls);
	my_free(echo);
	my_free(ip);
	my_free(nope);
	my_free_tab(ae);
}
