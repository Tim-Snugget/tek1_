/*
** EPITECH PROJECT, 2017
** lib : CPool_Day03
** File description:
** my_put_nbr
*/

#include "my.h"

int my_putnbr(int nb)
{
	unsigned int nbr = nb;

	if (nb < 0) {
		my_putchar('-');
		nbr = -nb;
	}
	if (nbr < 10)
		my_putchar(nbr + '0');
	else {
		my_putnbr(nbr / 10);
		my_putnbr(nbr % 10);
	}
	return (0);
}
