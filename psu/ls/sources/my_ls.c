/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** ls functions
*/

#include "ls_my.h"

int identify_type(char *name)
{
	char res;
	struct stat sb;

	stat(name, &sb);
	res = type_entity(sb.st_mode);
	switch (res) {
	case '-':
		return (-1);
	case 'd':
		return (1);
	}
	return (0);
}

void my_ls(list_opt_t *options, char *name)
{
	DIR *dir = NULL;
	struct dirent *folder = NULL;

	if (identify_type(name) != 0) {
		display_flags(name, options);
	}
	if (identify_type(name) == 1) {
		dir = opendir(name);
		folder = readdir(dir);
		my_putstr(folder->d_name);
		closedir(dir);
	}
	else if (identify_type(name) == -1)
		my_putstr(name);
}
