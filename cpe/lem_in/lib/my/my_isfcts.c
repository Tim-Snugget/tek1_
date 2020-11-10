/*
** EPITECH PROJECT, 2018
** my_lib
** File description:
** my_isfcts
*/

#include "my.h"

bool my_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (true);
	else
		return (false);
}

bool my_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	else
		return (false);
}
