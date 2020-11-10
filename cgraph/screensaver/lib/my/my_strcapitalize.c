/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** capitalize the first letter of every word
*/

#include "my.h"

int str_isnchar(char *str, int i)
{
	i -= 1;
	if (str[i] > 'z' || str[i] < 'a' && str[i] > 'Z' || str[i] < 'A')
		return (1);
	else
		return (0);
}

char *my_strcapitalize(char *str)
{
	int i = 0;

	while (str[i]) {
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z' ||	\
		str[i] >= 'a' && str[i]<= 'z' && str_isnchar(str, i) == 1)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
