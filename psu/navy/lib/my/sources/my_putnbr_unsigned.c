/*
** EPITECH PROJECT, 2017
** my_printf : my_putnbr_unsigned
** File description:
** print unsigned int nb
*/

#include "my.h"

int my_putnbr_unsigned(unsigned int nb)
{
	unsigned int rest_modulo;

	if (nb != 0) {
		if (nb < 10)
			my_putchar(nb + '0');
		else {
			rest_modulo = nb % 10;
			nb = (nb - rest_modulo) / 10;
			my_putnbr_unsigned(nb);
			my_putchar(rest_modulo + '0');
		}
	}
	return (0);
}
