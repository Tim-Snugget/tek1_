/*
** EPITECH PROJECT, 2018
** lemin
** File description:
** little and useful functions
*/

#include "lemin.h"

int count_nbrs(char *str)
{
	int cnt = 0;

	for (int i = 0; str[i]; i++) {
		if (my_isalpha(str[i]) == true)
			return (-1);
		if (i == 0 || ((str[i - 1] == ' ' || str[i - 1] == '-')
			&& str[i] >= '0' && str[i] <= '9'))
			cnt++;
	}
	return (cnt);
}

bool is_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t' || c == '\0')
		return (true);
	else
		return (false);
}

int count_words(char *str)
{
	int cnt = 0;

	if (!str)
		return (-1);
	for (int i = 0; str[i]; i++)
		if (str[i] > ' ' && is_separator(str[i + 1]) == true)
			cnt++;
	return (cnt);
}

bool verify_room_name(char *buf)
{
	int i;

	for (i = 0; buf[i] != ' '; i++)
		if (buf[i] == '-')
			return (false);
	for (i = i; buf[i] != '\0'; i++)
		if (buf[i] != ' ' && buf[i] != '\n' &&
		buf[i] != '-' && my_isnum(buf[i]) == false)
			return (false);
	return (true);
}

bool verify_node(char *buf)
{
	int cnt = 0;

	for (int i = 0; buf[i]; i++)
		if (buf[i] == '-')
			cnt++;
	if (cnt != 1 || count_words(buf) != 1)
		return (false);
	return (true);
}
