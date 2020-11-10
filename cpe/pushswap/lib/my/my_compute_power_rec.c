/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** dfghj
*/

#include "my.h"

int     back_up(int nb, int p, int a)
{
	nb = nb * a;
	p--;
	if (p != 1)
		back_up(nb, p, a);
	else
		my_put_nbr(nb);
}

int     my_compute_power_it_rec(int nb, int p)
{
	int a;

	a = nb;
	if (p == 0)
		return(1);
	else if (p < 0)
		return (0);
	else
		back_up(nb, p ,a);
}
