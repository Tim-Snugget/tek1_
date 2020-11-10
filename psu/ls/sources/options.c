/*
** EPITECH PROJECT, 2017
** options.c
** File description:
** options manips
*/

#include "ls_my.h"

void get_nbr_of_opts(list_opt_t *options, char **av, int ac)
{
	int x = 1;
	int cnt = 0;

	while (x != ac) {
		if (av[x][0] == '-')
			get_options(options, av[x]);
		cnt++;
		x++;
	}
	if (options->l == 1 || options->r == 1 || options->rCaps == 1 || \
	    options->d == 1 || options->t == 1)
		options->nbr = 1;
}

void get_options(list_opt_t *options, char *str)
{
	int x = 0;

	while (str[x]) {
		switch (str[x]) {
		case 'l':
			options->l = 1;
			break;
		case 'r':
			options->r = 1;
			break;
		case 'R':
			options->rCaps = 1;
			break;
		default:
			get_options_p2(options, str, x);
		}
		x++;
	}
}

void get_options_p2(list_opt_t *options, char *str, int x)
{
	switch (str[x]) {
	case 'd':
		options->d = 1;
		break;
	case 't':
		options->t = 1;
		break;
	}
}
