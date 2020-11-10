/*
** EPITECH PROJECT, 2018
** my_strcut.c
** File description:
** cut a string and returns from the nth chars, n given as a parameter
*/

#include "my.h"

char *my_strcut(char const *str, int n)
{
	int len = my_strlen(str);
	char *res = malloc(sizeof(char) * (len - n + 1));
	int i = 0;

	for (; str[n]; n++)
		res[i++] = str[n];
	res[i] = '\0';
	return (res);
}
