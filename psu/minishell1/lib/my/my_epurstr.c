/*
** EPITECH PROJECT, 2018
** my_epurstr.c
** File description:
** epure the string, removing every t v escape seq
*/

#include "my.h"

bool is_epur_separator(char c)
{
	if (c == '\v' || c == '\t' || c == ' ')
		return (true);
	else
		return (false);
}

bool is_full_nonalpha(char *str)
{
	int i;

	for (i = 0; str[i] && (str[i] == ' ' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\t'); i++);
	if (str[i] == '\0')
		return (true);
	else
		return (false);
}

char *my_epurstr(char *str)
{
	int j;

	if (is_full_nonalpha(str) == true)
		return (NULL);
	j = 0;
	for (int i = 0; str[i]; i++) {
		if (is_epur_separator(str[i]) == false)
			str[j++] = str[i];
		else if (j != 0 && is_epur_separator(str[i]) == true &&
			is_epur_separator(str[i - 1]) == false)
			str[j++] = ' ';
	}
	str[j] = '\0';
	return (str);
}
