/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** azuehaoih
*/

#include "my.h"

int my_compute_square_root(int nb)
{
	int res = 1;

	while (nb > res * res) {
		res++;
	}
	if (nb == res * res)
		return (res);
	else
		return (0);
}
