/*
** EPITECH PROJECT, 2018
** navy : get_map
** File description:
** get the map
*/

#include "navy.h"
#include "my.h"

int *set_para_checker(void)
{
	int *ptr = my_malloc(sizeof(int) * 4);

	ptr[0] = 2;
	ptr[1] = 3;
	ptr[2] = 4;
	ptr[3] = 5;
	return (ptr);
}

bool first_checker(char *file)
{
	int fd = open(file, O_RDONLY);
	int *para;
	char *buf;

	if (fd == -1)
		return (false);
	para = set_para_checker();
	for (int cnt = 0; cnt < 4; cnt++) {
		buf = get_next_line(fd);
		if (buf == NULL || buf[0] == '\0' || buf[0] == '\n')
			return (false);
		if (para[buf[0] - '0' - 2] == -1)
			return (false);
		para[buf[0] - '0' - 2] = -1;
		my_free(buf);
	}
	close(fd);
	return (true);
}

char **get_map(char *file)
{
	char **map = NULL;

	map = init_map();
	if (first_checker(file) == false)
		return (NULL);
	if (open_and_parse_map(file, map) == 84)
		return (NULL);
	return (map);
}
