/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** getnbr?
*/

#include "my.h"

int my_getnbr(char const *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int out = 0;

	while (str[i] != '\0' && out == 0) {
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') {
			result = result * 10 + str[i] - '0';
			i++;
			out = 1;
		}
		if (str[i] == '-' && out == 0)
			sign = -sign;
		i++;
	}
	result *= sign;
}
