/*
** EPITECH PROJECT, 2017
** bsq.c
** File description:
** bsq functions
*/

#include "bsq_my.h"

void display_map(char **tab, size_t nb_line)
{
	int cnt = 0;

	for (cnt = 0; tab[0][cnt] != '\0'; cnt++);
	for (int n = 0; n != nb_line; n++) {
		write(1, tab[n], cnt);
		my_putchar('\n');
	}
}

void print_bsq(Datas *sq, char **tab)
{
	size_t x = sq->first_case.x;
	size_t y = sq->first_case.y;
	size_t size = sq->size_sq;
	size_t n = y;
	size_t z = z = x;

	while (n != y + size) {
		while (z != x + size) {
			tab[n][z] = 'x';
			z++;
		}
		z = x;
		n++;
	}
	display_map(tab, sq->map_dims.height);
}

void set_datas(Datas *sq, int nb_line, int line_lim)
{
	sq->size_sq = 0;
	sq->checker.x = 0;
	sq->checker.y = 0;
	sq->map_dims.height = (size_t)nb_line;
	sq->map_dims.width = (size_t)line_lim;
}

void bsq(char **tab, int nb_line)
{
	Datas sq;
	int line_lim = my_strlen(tab[0]);

	set_datas(&sq, nb_line, line_lim);
	while (sq.checker.x != sq.map_dims.width) {
		while (sq.checker.y != sq.map_dims.height) {
			check_square(&sq, tab);
			sq.checker.y++;
		}
		sq.checker.y = 0;
		sq.checker.x++;
	}
	print_bsq(&sq, tab);
}
