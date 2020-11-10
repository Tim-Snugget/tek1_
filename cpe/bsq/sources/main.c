/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "bsq_my.h"

char *load_map(const char *file)
{
	int fd = open(file, O_RDONLY);
	struct stat file_info;
	char *buff;

	if (fd == -1)
		return (NULL);
	if (fstat(fd, &file_info) == -1)
		return (NULL);
	buff = malloc(sizeof(char) * (file_info.st_size));
	read(fd, buff, file_info.st_size);
	close(fd);
	return (buff);
}

int main(int ac, char **av)
{
	char *buffer = 0;
	char **tab = 0;

	if (ac != 2)
		return (EXIT_FAILURE);
	buffer = load_map(av[1]);
	if (buffer == NULL)
		return (EXIT_FAILURE);
	if (my_getnbr(buffer) == 1) {
		one_line_handling(buffer);
		return (EXIT_SUCCESS);
	}
	tab = get_double_tab(buffer, my_getnbr(buffer));
	if (special_case(tab, my_getnbr(buffer)) == true)
		return (0);
	bsq(tab, my_getnbr(buffer));
	return (0);
}
