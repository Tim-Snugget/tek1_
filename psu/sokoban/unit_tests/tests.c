/*
** EPITECH PROJECT, 2018
** tests.c
** File description:
** unit_tests main
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "sokoban.h"

void	print_help(void);
FILE	*fopen_map(char *name);
void	print_tab(char **tab);
char	**malloc_lines(char *name);
void	stock_map(char *name, char **map);
bool	parse_map(char **map);
bool	check_char(char c);

void stdout_op(void)
{
	cr_redirect_stdout();
}

Test(print_help, what_s_printed, .init = stdout_op)
{
	print_help();
	cr_assert_stdout_eq_str("USAGE\n     my_sokoban map\nDESCRIPTION\n     map  file representing the warehouse map, containing '#' for walls,\n          'P' for the player, 'X' for boxes and 'O' for storage locations.\n");
}

Test(fopen_map_fctn, success_test)
{
	cr_assert_not_null(fopen_map("file"));
}

Test(fopen_map_fctn, failing_test, .exit_code = 84)
{
	fopen_map("toto");
}

Test(stock_map_test, stock_the_map_in_a_double_tab, .init = stdout_op)
{
	char **map;

	map = malloc_lines("file");
	stock_map("file", map);
	print_tab(map);
	cr_assert_stdout_eq_str("######\n#  O #\n##   #\n# X P#\n#    #\n######\n");
}

Test(stock_map_test, null_double_array, .exit_code = 84)
{
	stock_map("file", NULL);
}

Test(stock_map_test, null_ptrs, .exit_code = 84)
{
	stock_map(NULL, NULL);
}

Test(check_char_test, parse_char_per_char)
{
	cr_assert_eq(check_char('#'), true);
	cr_assert_eq(check_char(' '), true);
	cr_assert_eq(check_char('X'), true);
	cr_assert_eq(check_char('P'), true);
	cr_assert_eq(check_char('O'), true);
	cr_assert_neq(check_char('s'), true);
	cr_assert_neq(check_char('x'), true);
	cr_assert_neq(check_char('\n'), true);
}

Test(parse_map_test, check_the_parsing)
{
	char **map;
	char *file = "file";

	map = malloc_lines(file);
	stock_map(file, map);
	cr_assert_eq(parse_map(map), true);
}

Test(parse_map_test, check_the_parsing_false)
{
	char **map;
	char *file = "wrong";

	map = malloc_lines(file);
	stock_map(file, map);
	cr_assert_eq(parse_map(map), false);
}
