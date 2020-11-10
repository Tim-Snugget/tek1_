/*
** EPITECH PROJECT, 2018
** is_built_in_ut.c
** File description:
** is a built in - Unit Tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ms1.h"

bool	is_built_in(char *s);

Test(is_built_in_tests, check_if_its_a_built_in)
{
	cr_assert_eq(is_built_in("cd"), true);
	cr_assert_eq(is_built_in("unsetenv"), true);
	cr_assert_eq(is_built_in("setenv"), true);
	cr_assert_eq(is_built_in("env"), true);
	cr_assert_eq(is_built_in("./a.out"), false);
	cr_assert_eq(is_built_in("ls"), false);
	cr_assert_eq(is_built_in("cdi"), false);
}
