/*
** EPITECH PROJECT, 2017
** folders.c
** File description:
** handle folders
*/

#include "ls_my.h"

void put_folder_name(char *name, int nb, int valArgs)
{
	if (nb > 1 || valArgs > 1) {
		my_putstr(name);
		my_putstr(":\n");
	}
}

void backline(int cnt)
{
	if (cnt > 0)
		my_putchar('\n');
}

void main_folders(char **av, int ac, int nb, list_opt_t *options)
{
	int x = 1;
	int valArgs = valid_args(av, ac);
	int cnt = nb - 1;

	while (x != ac) {
		if (identify_type(av[x]) == 1) {
			put_folder_name(av[x], nb, valArgs);
			put_blocks(av[x], options);
			disp_content(av[x], options);
			backline(cnt);
			cnt--;
		}
		x++;
	}
}

void disp_content(char *name, list_opt_t *options)
{
	DIR *dir = opendir(name);
	struct dirent *folder = readdir(dir);
	char *path = 0;

	while (folder != NULL) {
		if (folder->d_name[0] != '.') {
			path = strpath(name, folder->d_name);
			display_flags(path, options);
			my_putstr(folder->d_name);
			free(path);
			my_putchar('\n');
		}
		folder = readdir(dir);
	}
	closedir(dir);
}

char *strpath(char *folder, char *ent)
{
	char *res = 0;
	int x = 0;
	int k = 0;

	if (folder[my_strlen(folder) - 1] == '/')
		res = malloc(sizeof(char) * (my_strlen(folder)		\
					     + my_strlen(ent) + 1));
	else
		res = malloc(sizeof(char) * (my_strlen(folder)		\
					     + my_strlen(ent) + 2));
	while (folder[x]) {
		res[x] = folder[x];
		x++;
	}
	if (folder[x - 1] != '/')
		res[x++] = '/';
	while (ent[k])
		res[x++] = ent[k++];
	res[x] = '\0';
	return (res);
}
