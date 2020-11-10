/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
** aozyoad
*/

#include "my.h"

char *my_evil_str(char *str)
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
