/*
** EPITECH PROJECT, 2017
** loc_blocks.c
** File description:
** display the total of allocate blocks
*/

#include "ls_my.h"

void put_blocks(char *name, list_opt_t *options)
{
	if (options->l == 1) {
	        my_putstr("total ");
		my_put_nbr(get_loc_total(name));
		my_putchar('\n');
	}
}

int get_loc_total(char *name)
{
	struct stat sb;
	DIR *dir = opendir(name);
	struct dirent *folder = readdir(dir);
	unsigned int res = 0;

	while (dir == NULL)
		folder = readdir(dir);
	while (folder != NULL) {
		if (folder->d_name[0] != '.') {
			stat(strpath(name, folder->d_name), &sb);
			res += (unsigned int)sb.st_blocks;
		}
		folder = readdir(dir);
	}
	return (res / 2);
}
