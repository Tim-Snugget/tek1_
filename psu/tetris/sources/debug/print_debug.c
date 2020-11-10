/*
** EPITECH PROJECT, 2018
** print_debug.c
** File description:
** print the debug hud
*/

#include "tetris.h"

void print_commands(game_t *commands)
{
	print_command("Key Left : ", commands->left_k);
	print_command("Key Right : ", commands->right_k);
	print_command("Key Turn : ", commands->turn_k);
	print_command("Key Drop : ", commands->drop_k);
	print_command("Key Quit : ", commands->quit_k);
	print_command("Key Pause : ", commands->pause_k);
	if (commands->next == true)
		my_puts("Next :  Yes");
	else
		my_puts("Next :  No");
	my_putstr("Level :  ");
	my_putn(commands->lvl);
	my_putstr("Size :  ");
	my_putnbr(commands->map_row);
	my_putchar('*');
	my_putn(commands->map_col);
}

void print_tetriminos(void)
{
	char **stock;
	int cnt = count_tetriminos();

	if (cnt <= 0) {
		my_print_err("no tetrimino found\n");
		return;
	}
	stock = stock_tetriminos(cnt);
	if (!stock)
		return;
	stock = my_sort_char_array(stock);
	for (int i = 0; i < cnt; i++)
		check_tetrimino(my_strcat_s("tetriminos", stock[i], '/'));
}

void change_term_mode(int i)
{
	static struct termios old;
	static struct termios new;

	switch (i) {
	case 0: ioctl(0, TCGETS, &old);
		ioctl(0, TCGETS, &new);
		new.c_lflag &= ~ECHO;
		new.c_lflag &= ~ICANON;
		ioctl(0, TCSETS, &new);
		break;
	case 1: ioctl(0, TCSETS, &old);
		break;
	}
}

void print_debug(game_t *commands)
{
	char buff[5];

	my_puts("*** DEBUG MODE ***");
	print_commands(commands);
	print_tetriminos();
	my_puts("Press any key to start Tetris");
	change_term_mode(0);
	read(0, buff, 5);
	change_term_mode(1);
}
