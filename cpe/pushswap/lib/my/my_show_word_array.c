/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** apoizhda
*/

#include "my.h"

char *my_show_word_array(char **word_array)
{
	int i = 0;
	
	while (word_array[i] != 0) {
		my_putstr(word_array[i]);
		my_putchar('\n');
		i++;
	}
}
