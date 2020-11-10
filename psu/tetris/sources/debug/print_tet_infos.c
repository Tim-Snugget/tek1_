/*
** EPITECH PROJECT, 2018
** printers.c
** File description:
** printer functions
*/

#include "tetris.h"

void print_name(char *file)
{
	int name;
	int ext;

	for (name = my_strlen(file); name != 0 &&
		file[name] != '/'; name--);
	for (ext = name; strcmp(&file[ext], ".tetrimino") != 0; ext++);
	my_putstr(my_substr(file, name + 1, my_strlen(file) - name - 11));
	my_putstr(" : ");
}

void print_tetrimino_shape(char *file)
{
	int fd = my_open(file);
	char *buf =  get_next_line(fd);

	while (buf != NULL) {
		buf =  get_next_line(fd);
		my_puts(buf);
	}
	close(fd);
}

void print_stats(int *stats)
{
	my_putstr("Size ");
	my_putnbr(stats[0]);
	my_putchar('*');
	my_putnbr(stats[1]);
	my_putstr(" : Color ");
	my_putnbr(stats[2]);
	my_puts(" :");
}
