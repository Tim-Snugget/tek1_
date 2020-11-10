/*
** EPITECH PROJECT, 2018
** sokoban
** File description:
** check_crate
*/

#include "sokoban.h"

bool check_crate(char *map)
{
	int fd = my_open(map);
	struct stat sb;
	char *buf = NULL;

	fstat(fd, &sb);
	buf = my_malloc(sb.st_size);
	if (read(fd, buf, sb.st_size) == -1)
		my_xerror("read failed");
	for (int i = 0; buf[i] != '\0'; i++)
		if (buf[i] == 'X') {
			my_free(buf);
			close(fd);
			return (true);
		}
	my_free(buf);
	close(fd);
	return (false);
}
