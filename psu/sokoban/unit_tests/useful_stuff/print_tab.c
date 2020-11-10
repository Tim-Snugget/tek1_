/*
** EPITECH PROJECT, 2018
** print_tab.c
** File description:
** print a double array
*/

#include <unistd.h>

void	my_putchar(char c);

void print_tab(char **tab)
{
	for (int i = 0;tab[i]; i++) {
		for (int q = 0; tab[i][q] != '\0'; q++)
			my_putchar(tab[i][q]);
		my_putchar('\n');
	}
}
