/*
** EPITECH PROJECT, 2017
** printf : my_putnbr_base
** File description:
** print a number in a different base
*/

#include "my.h"

void my_putnbr_base(int nb, char const *start_base)
{
	int base_len = my_strlen(start_base);
	int nb_len = my_nbrlen(nb, base_len);
	char *new_base = malloc(sizeof(char) * (nb_len));
	int count = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	for (; nb != 0; count++) {
		new_base[count] = start_base[(nb % base_len)];
		nb /= base_len;
	}
	for (; count >= 0; count--)
		my_putchar(new_base[count]);
}

int my_nbrlen(int nb, int base_len)
{
	int count = 0;

	for (; nb != 0; count++)
		nb = nb / base_len;
	return (count);
}
