/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** display a given int
*/

#include "my.h"

void my_putnbr(int nb)
{
	int crate;

	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	} else {
		if (nb > 9) {
			crate = (nb % 10);
			nb = (nb - crate) / 10;
			my_putnbr(nb);
			my_putchar(crate + '0');
		} else
			my_putchar(nb % 10 + '0');
	}
}
