/*
** EPITECH PROJECT, 2017
** square_checker.c
** File description:
** check the square
*/

#include "bsq_my.h"

bool check_lines(char **tab, size_t k, Datas *sq)
{
	int n = 0;

	if (sq->checker.y + k + 1 > sq->map_dims.height)
		return (false);
	for (n = sq->checker.y; n != sq->checker.y + k + 1; n++)
		if (tab[n][sq->checker.x + k] == 'o')
			return (false);
	return (true);
}

bool check_cols(char **tab, size_t k, Datas *sq)
{
	int n = 0;

	for (n = sq->checker.x; n != sq->checker.x + k &&
		n != sq->map_dims.width; n++)
		if (tab[sq->checker.y + k][n] == 'o')
			return (false);
	if (n == sq->map_dims.width)
		return (false);
	return (true);
}

bool check_add_k(char **tab, size_t k, Datas *sq)
{
	if (tab[sq->checker.y][sq->checker.x] == 'o')
		return (false);
	else if (check_lines(tab, k, sq) == false ||
		check_cols(tab, k, sq) == false)
		return (false);
	else
		return (true);
}

void check_square(Datas *sq, char **tab)
{
	size_t k = 0;

	while (check_add_k(tab, k, sq) == true)
		k++;
	if (sq->size_sq == 0 || k > sq->size_sq) {
		sq->size_sq = k;
		sq->first_case.x = sq->checker.x;
		sq->first_case.y = sq->checker.y;
	}
}
