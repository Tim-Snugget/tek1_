/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** aoidja
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	int i;
	int check;

	if (nb == 1 || nb == 0)
		return (0);
	i = nb / 2;
	while (i != 0 && check == 1) {
		if (nb % i == 0) {
			check == 0;
		}
		i--;
	}
	if (check == 0)
		return (0);
	if (check == 0)
		return (0);
}
