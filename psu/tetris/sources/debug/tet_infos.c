/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main tetris bs
*/

#include "tetris.h"

int count_nbrs(char *str)
{
	int cnt = 0;

	for (int i = 0; str[i]; i++) {
		if (my_isalpha(str[i]) == true)
			return (-1);
		if (i == 0 || (str[i - 1] == ' ' && str[i] >= '0' &&
			str[i] <= '9'))
			cnt++;
	}
	return (cnt);
}

int *init_stat_arr(char *file)
{
	int fd = my_open(file);
	char *line = get_next_line(fd);
	int cnt = 0;
	int *ptr = my_malloc(sizeof(int) * 3);

	if (line == NULL)
		return (NULL);
	if (count_nbrs(line) != 3)
		return (NULL);
	for (int i = 0; line[i] && cnt != 3; i++) {
		if (my_isalpha(line[i]) == true)
			return (NULL);
		if (i == 0 || (line[i - 1] == ' ' && line[i] <= '9' &&
			line[i] >= '0'))
			ptr[cnt++] = my_getnbr(&line[i]);
	}
	close(fd);
	if (cnt != 3 || (ptr[0] || ptr[1] || ptr[2]) <= 0 || ptr[2] > 7)
		return (NULL);
	return (ptr);
}

int line_checker(char *line, int max_w)
{
	int index = 0;

	for (int i = 0; line[i]; i++) {
		if (line[i] != ' ' && line[i] != '*')
			return (-1);
		if (line[i] == '*')
			index = i;
	}
	if (index >= max_w)
		return (-1);
	return (index);
}

int verify_map(char *file, int *stats)
{
	int fd = my_open(file);
	char *buf = get_next_line(fd);
	int line_cnt = 0;
	int w_max = 0;
	int lv;

	buf = get_next_line(fd);
	while (buf != NULL && line_cnt < stats[1]) {
		line_cnt++;
		lv = line_checker(buf, stats[0]);
		if (lv == -1)
			return (-1);
		if (lv > w_max)
			w_max = lv;
		buf = get_next_line(fd);
	}
	if (w_max + 1 != stats[0] || line_cnt != stats[1] || buf != NULL)
		return (-1);
	close(fd);
	return (0);
}

void check_tetrimino(char *file)
{
	int *stats;

	my_putstr("Tetriminos : Name ");
	print_name(file);
	stats = init_stat_arr(file);
	if (stats == NULL) {
		my_puts("Error");
		return;
	}
	if (verify_map(file, stats) == -1) {
		my_puts("Error");
		return;
	}
	print_stats(stats);
	print_tetrimino_shape(file);
}
