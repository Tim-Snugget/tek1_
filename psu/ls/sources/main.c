/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main my_ls
*/

#include "ls_my.h"

void initialize_opts(list_opt_t *options)
{
	options->nbr = 0;
	options->l = 0;
	options->r = 0;
	options->rCaps = 0;
	options->d = 0;
	options->t = 0;
}

int check_folders(char **av, int ac)
{
	int x = 1;
	int cnt = 0;

	while (x != ac) {
		if (av[x][0] != '-' && identify_type(av[x]) == 1)
			cnt++;
		x++;
	}
	return (cnt);
}

int valid_args(char **av, int ac)
{
	int x = 1;
	int cnt = 0;

	while (x != ac) {
		if (identify_type(av[x]) != 0)
		    cnt++;
		x++;
	}
	x = 1;
	while (x != ac) {
		if (av[x][0] == '-')
			cnt--;
		x++;
	}
	return (cnt);
}

void display_list(list_opt_t *options, char **av, int ac)
{
	int nbr_fld = check_folders(av, ac);

	if (check_files(av, ac) == 1) {
		display_files(options, av, ac);
		if (nbr_fld > 0)
			my_putchar('\n');
	}
	if (nbr_fld > 0)
		main_folders(av, ac, nbr_fld, options);
}

int main(int ac, char **av)
{
	list_opt_t options;

	initialize_opts(&options);
	if (ac == 1)
		disp_content("./", &options);
	else if (ac > 1 && check_folders(av, ac) == 0 &&	\
		 check_files(av, ac) == 0) {
		get_nbr_of_opts(&options, av, ac);
		if (options.nbr == 1)
			disp_content("./", &options);
	} else {
		get_nbr_of_opts(&options, av, ac);
		display_list(&options, av, ac);
	}
	return (0);
}
