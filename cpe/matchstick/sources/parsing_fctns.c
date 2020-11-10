/*
** EPITECH PROJECT, 2018
** parsing_fctns.c
** File description:
** parsing functions
*/

#include "mts.h"

int get_chosen_line(int max_line)
{
	int line;
	char *tmp;

	my_putstr("Line: ");
	tmp = get_next_line(0);
	if (tmp[0] == '\0')
		return (-2);
	if (isnum(tmp) == false) {
		my_puterr("invalid input (positive number expected)");
		return (-1);
	}
	line = my_getnbr(tmp);
	if (line <= 0 || line > max_line) {
		my_puterr("this line is out of range");
		return (-1);
	}
	return (line);
}

int get_chosen_match(int mat_lim, char *map_row)
{
	int mat;
	char *tmp;

	my_putstr("Matches: ");
	tmp = get_next_line(0);
	if (tmp[0] == '\0')
		return (-2);
	if (isnum(tmp) == false) {
		my_puterr("invalid input (positive number expected)");
		return (-1);
	}
	mat = my_getnbr(tmp);
	if (check_mat(mat, mat_lim, map_row) == false)
		return (-1);
	return (mat);
}

bool check_mat(int mat, int mat_lim, char *map_row)
{
	int i;
	int j;

	if (mat <= 0 || mat > mat_lim) {
		print_match_error(mat, mat_lim);
		return (false);
	}
	for (i = 0; map_row[i] && map_row[i] != '|'; i++);
	for (j = 0; map_row[i] == '|'; i++, j++);
	if (j < mat) {
		my_puterr("not enough matches on this line");
		return (false);
	}
	return (true);
}

bool isnum(char *s)
{
	for (int i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (false);
	return (true);
}

bool parse_args(char **args)
{
	int s;

	for (int i = 1; i < 3; i++) {
		for (s = 0; args[i][s] >= '0' && args[i][s] <= '9'; s++);
		if (args[i][s] != '\0')
			return (false);
	}
	if (my_getnbr(args[1]) > 99)
		return (false);
	return (true);
}
