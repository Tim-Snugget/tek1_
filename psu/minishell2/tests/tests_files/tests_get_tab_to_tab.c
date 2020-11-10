/*
** EPITECH PROJECT, 2018
** unit tests gttt
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include "ms.h"

Test(test01, get_tab_to_tab_basic_test)
{
	char *tab[] = {"I", "am", "a", "|", "super" "nice", "|", "tab", NULL};
	char ***stab = get_tab_to_tab(tab, "|");
	char *foo[4] = {"I", "am", "a", NULL};
	char *bar[3] = {"super", "nice", NULL};
	char *beq[2] = {"tab", NULL};

	cr_expect_arr_eq(stab[0], foo);
	cr_expect_arr_eq(stab[1], bar);
	cr_expect_arr_eq(stab[2], beq);
	cr_expect_null(stab[3]);
	for (int i = 0; stab[i]; my_free_tab(stab[i]), i++);
	my_free(stab);
}
