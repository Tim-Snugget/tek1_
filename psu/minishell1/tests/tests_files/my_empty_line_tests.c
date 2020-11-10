/*
** EPITECH PROJECT, 2018
** my_empty_line.c
** File description:
** my empty line unit test
*/

#include <criterion/criterion.h>
#include "ms1.h"

Test(my_empty_line_tests, check_if_the_given_line_is_empty)
{
	cr_assert_eq(my_empty_line(" "), true);
	cr_assert_eq(my_empty_line(" \v\v\t\v\t"), true);
	cr_assert_eq(my_empty_line("\t\t\t\t\t\t"), true);
	cr_assert_eq(my_empty_line(" \v\t\n"), true);
	cr_assert_eq(my_empty_line(" vtn"), false);
}
