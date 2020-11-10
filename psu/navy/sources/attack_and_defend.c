/*
** EPITECH PROJECT, 2018
** navy : attack_and_defend
** File description:
** The player 1 and the player 2 play
*/

#include "navy.h"
#include "my.h"

void defend(char **my_map)
{
	my_putchar('\n');
	my_putstr("waiting for enemy's attack...\n");
	recieved_torpedo(my_map);
}

char get_letter(char *str, char number)
{
	char letter = str[0];

	if (number != '?' && (letter < 'A' || letter > 'H')) {
		my_putstr("wrong position");
		letter = '?';
	}
	return (letter);
}

char get_number(char *str)
{
	char number = str[1];

	if (number < '1' || number > '8') {
		my_putstr("wrong position");
		number = '?';
	}
	return (number);
}

int number_letter(char **en_map, char *str, int loop)
{
	char number;
	char letter;

	if (loop != 1) {
		number = get_number(str);
		letter = get_letter(str, number);
		if (number == '?' || letter == '?')
			return (1);
	}
	en_map[number - '1'][letter - 'A'] = position(letter, number, en_map);
	return (loop);
}

int attack(char **enn_map)
{
	char *str = NULL;
	int loop = 0;

	my_putstr("\nattack: ");
	str = get_next_line(0);
	if (str == NULL)
		return (84);
	if (my_strlen(str) != 2) {
		my_putstr("wrong position");
		return (1);
	}
	loop = number_letter(enn_map, str, loop);
	return (loop);
}
