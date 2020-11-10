/*
** EPITECH PROJECT, 2017
** printf : parameter
** File description:
** parameter field
*/

#include "printf.h"

int parameter(char const *str, count_t *count)
{
	int j = count->i;

	if (str[j] <= '9' && str[j] >= '0') {
		while (str[j] <= '9' && str[j] >= '0')
			j++;
		if (str[j] == '$') {
			j++;
			count->i = j;
		}
	}
	return (count->i);
}
