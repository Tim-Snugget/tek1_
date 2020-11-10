/*
** EPITECH PROJECT, 2018
** parse_char.c
** File description:
** parse char per char
*/

#include "sokoban.h"

bool check_char(char c)
{
	switch (c) {
	case '#':
		return (true);
	case ' ':
		return (true);
	case 'X':
		return (true);
	case 'P':
		return (true);
	case 'O':
		return (true);
	case '\n':
		return (true);
	default:
		return (false);
	}
}
