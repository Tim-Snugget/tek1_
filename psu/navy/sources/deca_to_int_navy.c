/*
** EPITECH PROJECT, 2018
** deca_to_int_navy.c
** File description:
** deca to int navy, from 0 to 7
*/

#include "navy.h"
#include "my.h"

char first_bin(int nb)
{
	if (nb > 3)
		return ('1');
	else
		return ('0');
}

char sec_bin(int nb)
{
	int tmp;

	tmp = nb % 4;
	if (tmp == 2 || tmp == 3)
		return ('1');
	else
		return ('0');
}

char last_bin(int nb)
{
	if (nb % 2 == 1)
		return ('1');
	else
		return ('0');
}

char *deca_to_bin_navy(int nb)
{
	char *res = my_malloc(sizeof(char) * 4);

	if (nb < 0 || nb > 8)
		return (NULL);
	res[3] = '\0';
	res[0] = first_bin(nb);
	res[1] = sec_bin(nb);
	res[2] = last_bin(nb);
	return (res);
}
