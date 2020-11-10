/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get next line from a filedes
*/

#include "my.h"

char *get_next_line(int fd)
{
	char *res = my_malloc(sizeof(char) * 1);
	char buf[2];
	int n = 1;
	int rd = 0;

	res[0] = '\0';
	while ((rd = read(fd, buf, 1)) > 0) {
		buf[1] = '\0';
		if (buf[0] == '\n')
			break;
		res = my_realloc_str(res, n + 1);
		res[n - 1] = buf[0];
		res[n] = '\0';
		n++;
	}
	if (rd == 0 && my_strlen(buf) == 0)
		return (NULL);
	return (res);
}
