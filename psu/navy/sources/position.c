/*
** EPITECH PROJECT, 2018
** navy : position
** File description:
** check if the attack has hit a boat or missed
*/

#include "navy.h"
#include "printf.h"

char position(char letter, char number, char **en_map)
{
	int torpedo;

	my_printf("%c%c: ", letter, number);
	torpedo = send_torpedo(number, letter);
	if (en_map[number - '1'][letter - 'A'] == 'x') {
		my_printf("missed\n");
		return ('x');
	}
	switch (torpedo) {
	case 1: my_printf("hit\n"); sonar.end_my++; return ('x');
	case 0: my_printf("missed\n"); return ('o');
	}
	return (0);
}
