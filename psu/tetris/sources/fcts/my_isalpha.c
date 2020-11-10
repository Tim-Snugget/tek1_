/*
** EPITECH PROJECT, 2018
** my_isalpha.c
** File description:
** is alpha char
*/

#include <stdbool.h>

bool my_isalpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c < 'Z')
		return (false);
	else
		return (true);
}
