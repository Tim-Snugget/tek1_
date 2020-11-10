/*
** EPITECH PROJECT, 2017
** CPool_Day04
** File description:
** day03
*/

#include "my.h"

int my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
	return (0);
}
