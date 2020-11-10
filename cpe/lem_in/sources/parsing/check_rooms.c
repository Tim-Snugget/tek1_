/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** check_rooms
*/

#include "lemin.h"

bool check_special_rooms(char **params)
{
	int cnt1 = 0;
	int cnt2 = 0;
	int r_s;
	int r_e;

	for (int i = 0; params[i]; i++) {
		if (my_strcmp(params[i], "##start\n") == 0) {
 			cnt1++;
			r_s = i + 1;
		} else if (my_strcmp(params[i], "##end\n") == 0) {
			cnt2++;
			r_e = i + 1;
		}
	}
	if (cnt1 != 1 || cnt2 != 1)
		return (false);
	if (count_words(params[r_s]) != 3 || count_words(params[r_e]) != 3)
		return (false);
	return (true);
}
