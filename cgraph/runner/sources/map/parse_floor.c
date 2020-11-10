/*
** EPITECH PROJECT, 2018
** parse_floor
** File description:
** floor checker functions
*/

#include "runner.h"

bool check_pre_floor(char **tab, int floor, int floor_len)
{
	int i;
	int q;

	for (i = 0; i != floor; i++) {
		for (q = 0; tab[i][q]; q++);
		if (q > floor_len)
			return (false);
	}
	if (floor <= 1)
		return (true);
	for (i = 0; i != floor - 1; i++) {
		for (q = 0; tab[i][q] == ' ' && tab[i][q]; q++);
		if (tab[i][q] == '1' || tab[i][q] == '2')
			return (false);
	}
	return (true);
}

bool check_post_floor(char **tab, int floor, int floor_len)
{
	int i;
	int q;

	for (i = floor + 1; tab[i] != NULL; i++) {
		for (q = 0; tab[i][q] && tab[i][q]; q++);
		if (q > floor_len || (tab[i][q] != '\0' && tab[i][q] != '1'))
			return (false);
	}
	return (true);
}
