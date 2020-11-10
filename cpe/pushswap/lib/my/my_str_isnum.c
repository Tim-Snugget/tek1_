/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** dfghjkl
*/
#include "my.h"

int my_str_isnum(char const *str)
{
	int checker = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9')
			checker = checker;
		else
			checker = 0;
	}
	return (checker);
}
