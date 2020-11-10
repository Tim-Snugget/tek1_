/*
** EPITECH PROJECT, 2018
** check_arg_val_se.c
** File description:
** check arg validity to setenv - unit test
*/

#include <criterion/criterion.h>
#include "ms1.h"

Test(check_val_arg_se, alphanumeric_dud)
{
	cr_assert_eq(check_validity_arg_se("epitech"), true);
	cr_assert_eq(check_validity_arg_se("JOHN_CENA"), true);
	cr_assert_eq(check_validity_arg_se("epitech42"), true);
	cr_assert_eq(check_validity_arg_se("epitech!"), false);
	cr_assert_eq(check_validity_arg_se("ep.it-ache*~*"), false);
}
