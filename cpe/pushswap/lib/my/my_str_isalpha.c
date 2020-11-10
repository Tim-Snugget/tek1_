/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** dfghjkl
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
	int checker = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z' ||
		    str[i] >= 'a' && str[i] <= 'z')
			checker = checker;
		else
			checker = 0;
	}
	return (checker);
}
