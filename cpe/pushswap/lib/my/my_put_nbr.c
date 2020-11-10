/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** zaoie
*/

#include "my.h"

int div_nb(int nb)
{
	int d = 1;

	while (nb / d > 9)
		d = d * 10;
	return (d);
}

int my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	int diviseur = div_nb(nb);
	int number = 0;

	while (diviseur > 0) {
		number = nb / diviseur;
		my_putchar(number + '0');
		nb = nb % diviseur;
		diviseur = diviseur / 10;
	}
}
