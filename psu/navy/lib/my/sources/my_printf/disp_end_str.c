/*
** EPITECH PROJECT, 2017
** printf : disp_end_str
** File description:
** display the end of str
*/

#include "printf.h"

void disp_end_str(char const *str, count_t *count)
{
	while (str[count->i] != '\0') {
		my_putchar(str[count->i]);
		count->i++;
	}
}
