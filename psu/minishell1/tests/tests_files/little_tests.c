/*
** EPITECH PROJECT, 2018
** little_tests.c
** File description:
** unit tests 
*/

#include <criterion/criterion.h>
#include "ms1.h"

Test(my_strcmp, somethings_weird_s_happening)
{
	cr_assert_eq(my_strcmp("ls", "ls"), 0);
	cr_assert_eq(my_strcmp("unsetenv", "unsetenv"), 0);
	printf("%d\n", my_strcmp("ls", "cd"));
	cr_assert_neq(my_strcmp("ls", "cd"), 0);
	cr_assert_neq(my_strcmp("ls", "unsetenv"), 0);
}
