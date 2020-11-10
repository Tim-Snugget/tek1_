/*
** EPITECH PROJECT, 2017
** disp_flags.c
** File description:
** choose the flags to display
*/

#include "ls_my.h"

void display_flags(char *arg, list_opt_t *options)
{
	if (options->l == 1)
		put_l_flag(arg);
}
