/*
** EPITECH PROJECT, 2018
** debug_fcts.c
** File description:
** debug functions
*/

#include "tetris.h"

char **stock_tetriminos(int cnt)
{
	char **ptr = my_malloc(sizeof(char *) * (cnt + 1));
	DIR *dirp = opendir("tetriminos");
	struct dirent *d = NULL;

	if (!dirp)
		return (NULL);
	d = readdir(dirp);
	my_memset(ptr, 0, sizeof(char *) * (cnt + 1));
	for (int i = 0; errno == 0 && d != NULL; ) {
		if (my_strlen(d->d_name) >= 11 &&
		my_strcmp(get_ext(d->d_name), ".tetrimino") == 0) {
			ptr[i] = my_malloc(sizeof(char) *
					(my_strlen(d->d_name) + 1));
			ptr[i++] = my_strdup(d->d_name);
		}
		d = readdir(dirp);
	}
	my_closedir(dirp);
	return (ptr);
}

int count_tetriminos(void)
{
	int cnt;
	struct dirent *dir;
	DIR *dirp = opendir("tetriminos");

	if (!dirp)
		return (-1);
	for (dir = readdir(dirp), cnt = 0; dir != NULL; dir = readdir(dirp))
		if (my_strlen(dir->d_name) >= 11 &&
		my_strcmp(get_ext(dir->d_name), ".tetrimino") == 0)
			cnt++;
	my_closedir(dirp);
	my_putstr("Tetriminos : ");
	my_putn(cnt);
	return (cnt);
}

void print_esc_seq(int cmd)
{
	switch (cmd) {
	case KEY_UP: my_puts("^EOA"); break;
	case KEY_DOWN: my_puts("^EOB"); break;
	case KEY_RIGHT: my_puts("^EOC"); break;
	case KEY_LEFT: my_puts("^EOD"); break;
	default: my_puts("ESC"); break;
	}
}

void print_command(char *str, int cmd)
{
	my_putstr(str);
	if ((cmd >= 258 && cmd <= 261) || cmd == 27)
		print_esc_seq(cmd);
	else if (cmd == ' ')
		my_puts("(space)");
	else
		my_putc(cmd);
}
