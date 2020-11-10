/*
** EPITECH PROJECT, 2018
** prompt_test
** File description:
** unit test prompt printing
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "ms1.h"

void red_stdout(void)
{
	cr_redirect_stdout();
}

Test(print_prompt, print_the_prompt, .init = red_stdout)
{
	print_prompt();
	cr_expect_stdout_eq_str("/tests ~~> ");
}
