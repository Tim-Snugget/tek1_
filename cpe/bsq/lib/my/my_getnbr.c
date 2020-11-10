/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** get a number from a string to return an int value
*/

#include "my.h"

int st_char(char const *str)
{
	int i = 0;

	while ((str[i] < '0' || str[i] > '9') && str[i])
		i++;
	if (str[i] == '\0')
		return (-1);
	return (i);
}

int get_sign(char const *str, int i)
{
	int sign = 1;

	i--;
	while (i != -1 && (str[i] == '+' || str[i] == '-')) {
		if (str[i] == '-')
			sign *= -1;
		i--;
	}
	return (sign);
}

int my_getnbr(char const *str)
{
	int nb = 0;
	int x = st_char(str);
	int sign = 0;

	if (x == -1)
		return (0);
	sign = get_sign(str, x);
	while (str[x] && str[x] >= '0' && str[x] <= '9') {
		nb += str[x] - '0';
		nb *= 10;
		x++;
	}
	nb /= 10;
	return (nb * sign);
}
