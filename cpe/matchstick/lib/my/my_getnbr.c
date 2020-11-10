/*
** EPITECH PROJECT, 2018
** my_string_to_int.c
** File description:
** returns the integer contained into the given string
*/

#include "my.h"

int get_multiplier(char *str)
{
	int d = 0;
	int i;

	for (i = 0; str[i] && (str[i] <= '0' || str[i] > '9'); i++);
	for (; str[i] && str[i] >= '0' && str[i] <= '9'; i++) {
		if (d == 0)
			d++;
		else
			d *= 10;
	}
	return (d);
}

int get_sign(char *str)
{
	int i;

	for (i = 0; str[i] && (str[i] <= '0' || str[i] > '9'); i++);
	if (i != 0 && str[i - 1] == '-')
		return (-1);
	else
		return (1);
}

int my_getnbr(char *str)
{
	int res = 0;
	int sign = get_sign(str);
	int d = get_multiplier(str);
	int i;

	if (my_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	for (i = 0; str[i] && (str[i] <= '0' || str[i] > '9'); i++);
	for (;str[i] && str[i] >= '0' && str[i] <= '9'; i++) {
		res += (str[i] - '0') * d;
		d /= 10;
	}
	return (res * sign);
}
