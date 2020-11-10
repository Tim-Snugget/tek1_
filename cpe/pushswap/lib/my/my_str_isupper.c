/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** dfghjkl
*/

#include "my.h"

int my_str_isupper(char const *str)
{
	int checker = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		my_str_isalpha(str);
		if (str[i] >= 'A' && str[i] <= 'Z')
			checker = checker;
		else
			checker = 0;
	}
	return (checker);
}
