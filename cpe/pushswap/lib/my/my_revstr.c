/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** aaaaaaa
*/

#include "my.h"

char *my_revstr(char *str)
{
	char c;
	int i = 0;
	int j = my_strlen(str) - 1;

	while (i < j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}
