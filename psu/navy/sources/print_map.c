/*
** EPITECH PROJECT, 2018
** navy : print_map
** File description:
** print map
*/

#include "navy.h"
#include "my.h"
#include "printf.h"

void print_map(char **map)
{
	my_putstr(" |A B C D E F G H\n");
	my_putstr("-+---------------\n");
	for (int i = 0; map[i]; i++) {
		my_printf("%i|", i + 1);
		for (int j = 0; j != 7;j++)
			my_printf("%c ", map[i][j]);
		my_printf("%c\n", map[i][7]);
	}
}
