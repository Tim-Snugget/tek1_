/*
** EPITECH PROJECT, 2018
** parse_map.c
** File description:
** marse map main functions
*/

#include "runner.h"

bool check_chars(char **tab)
{
	int q;

	for (int i = 0; tab[i] != NULL; i++) {
		for (q = 0; tab[i][q] == ' ' || tab[i][q] == '1' ||     \
			     tab[i][q] == '2'; q++);
		if (tab[i][q] != '\0')
			return (false);
//	      tab[i][q] == '\0' ? continue : return (false);
	}
	return (true);
}

int get_floor(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL && tab[i][0] != '1'; i++);
	if (tab[i] == NULL)
		return (-1);
	return (i);
}

int get_len(char **tab, int floor)
{
	int i;

	for (i = 0; tab[floor][i] != '\0'; i++)
		if (tab[floor][i] != '1')
			return (-1);
	return (i);
}

bool parse_map(char **tab)
{
	int floor;
	int floor_len;

	if (check_chars(tab) == false)
		return (false);
	floor = get_floor(tab);
	if (floor == -1)
		return (false);
	floor_len = get_len(tab, floor);
	if (floor_len == -1)
		return (false);
	if (check_pre_floor(tab, floor, floor_len) == false ||	\
	    check_post_floor(tab, floor, floor_len) == false)
		return (false);
	return (true);
/*      check_chars(tab) = (false) ? return (false) : continue;		 
	check_chars(tab) == false ? return (false) : continue;		  
	floor = get_floor(tab) == -1 ? return (false) : continue;	       
	floor_len = get_len(tab) == -1 ? return (false) : continue;*/
}
