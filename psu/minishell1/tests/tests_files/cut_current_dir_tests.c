/*
** EPITECH PROJECT, 2018
** cut_current_dir_tests.c
** File description:
** cut_current_dir fctn - unit tests
*/

#include <criterion/criterion.h>
#include "ms1.h"

Test(current_dir_tests, test_the_cut_of_getcwd)
{
	char *str = my_strdup("/home/tfertin/get_tested");
	char *st2 = my_strdup("/path/to/current/directory");
	char *st3 = my_strdup("/home");

	cr_assert_str_eq(cut_current_dir(str), "/get_tested");
	cr_assert_str_eq(cut_current_dir(st2), "/directory");
	cr_assert_str_eq(cut_current_dir(st3), "/home");
}
