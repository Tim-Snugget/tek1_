/*
** EPITECH PROJECT, 2018
** int_to_str.c
** File description:
** get an int a return an str
*/

#include "runner.h"

char *int_to_str(int i)
{
	int d;
	int crate = 1;
	int box = 0;
	char *str;

	for (d = 1; i / d >= 10; d *= 10)
		crate++;
	str = malloc(sizeof(char) * (crate + 1));
	for (int j = 0; j != crate; j++) {
		str[j] = ((i / d) - box) + '0';
		box = (i / d) * 10;
		d /= 10;
	}
	str[crate] = '\0';
	return (str);
}
