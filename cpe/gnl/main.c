/*
** EPITECH PROJECT, 2018
** az
** File description:
** dad
*/

#include "get_next_line.h"

void my_putstr(char *str)
{
	int i;

	for (i = 0; str[i]; i++);
	write(1, str, i);
}

int main() {
	int fd = open("file", O_RDONLY);
	char *foo;

	foo = get_next_line(fd);
	my_putstr("\n"); my_putstr(foo); my_putstr("\n\n");
	foo = get_next_line(fd);
	my_putstr("\n"); my_putstr(foo); my_putstr("\n\n");
	foo = get_next_line(fd);
	my_putstr("\n"); my_putstr(foo); my_putstr("\n\n");
	close(fd);
	return (0);
}
