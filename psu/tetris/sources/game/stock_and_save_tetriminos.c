/*
** EPITECH PROJECT, 2018
** mytetris
** File description:
** stock_and_save_tetriminos.c
*/

#include "tetris.h"

int count_valid_tetriminos(void)
{
	int cnt;
	struct dirent *dir;
	DIR *dirp = opendir("tetriminos");

	if (!dirp)
		return (-1);
	for (dir = readdir(dirp), cnt = 0; dir != NULL; dir = readdir(dirp))
		if (my_strlen(dir->d_name) >= 11 &&
		my_strcmp(get_ext(dir->d_name), ".tetrimino") == 0 &&
		verify_tetrimino(dir->d_name) == true)
			cnt++;
	my_closedir(dirp);
	return (cnt);
}

char **copy_shape(tetri_t *tetrimino, char *name)
{
	int fd = my_open(my_strcat_s("tetriminos", name, '/'));
	char *buf = get_next_line(fd);
	char **tmp = my_malloc(sizeof(char *) * (tetrimino->height + 1));
	int i = 0;

	for (buf = get_next_line(fd); buf != NULL; buf = get_next_line(fd))
		tmp[i++] = my_strdup(buf);
	tmp[i] = NULL;
	close(fd);
	return (tmp);
}

tetri_t *get_tetrimino(char *name)
{
	tetri_t *tetrimino;
	int *stats = init_stat_arr(my_strcat_s("tetriminos", name, '/'));

	if (stats == NULL)
		return (NULL);
	tetrimino = my_malloc(sizeof(*tetrimino));
	tetrimino->width = stats[0];
	tetrimino->height = stats[1];
	tetrimino->color_code = stats[2];
	tetrimino->shape = copy_shape(tetrimino, name);
	my_free(stats);
	return (tetrimino);
}

void save_tetriminos(container_t *ptr)
{
	struct dirent *d;
	DIR *dirp = opendir("tetriminos");
	int i;

	if (!dirp)
		return;
	for (d = readdir(dirp), i = 0; d != NULL; d = readdir(dirp))
		if (my_strlen(d->d_name) >= 11 &&
		my_strcmp(get_ext(d->d_name), ".tetrimino") == 0 &&
		verify_tetrimino(d->d_name) == true)
			ptr->tetrimino[i++] = get_tetrimino(d->d_name);
	return;
}

container_t *stock_and_save_tetriminos(void)
{
	int cnt = count_valid_tetriminos();
	container_t *ptr;

	if (cnt <= 0)
		return (NULL);
	ptr = my_malloc(sizeof(*ptr));
	ptr->nb_tetri = cnt;
	ptr->tetrimino = my_malloc(sizeof(tetri_t *) * cnt);
	save_tetriminos(ptr);
	return (ptr);
}
