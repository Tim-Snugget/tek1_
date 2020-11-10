/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** display a given int
*/

#include "my.h"

int divider(int nb)
{
	int p = 1;

	while (nb / p > 9)
		p *= 10;
	return (p);
}

int my_put_nbr(int nb)
{
	int div = divider(nb);

	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	}
	while (nb > 9) {
		my_putchar(nb / div + '0');
		nb %= div;
		div/= 10;
	}
	my_putchar(nb + '0');
}
