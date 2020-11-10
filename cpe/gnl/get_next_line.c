/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** gnl functions
*/

#include "get_next_line.h"

char *my_strcat(char *s1, char *s2)
{
	char *s;
	int i;
	int j;

	for (i = 0; s1[i]; i++);
	for (j = 0; s2[j]; j++);
	s = malloc(sizeof(char) * (i + j + 1));
	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = 0; s2[j]; j++)
		s[i++] = s2[j];
	return (s);
}

char *cut_till_nextline(char *s1, char *s2)
{
	char *res;
	char *box;
	int i;

	for (i = 0; s2[i] != '\n' && s2[i]; i++);
	box = malloc(sizeof(char) * (i + 1));
	for (i = 0; s2[i] != '\n' && s2[i]; i++)
		box[i] = s2[i];
	res = my_strcat(s1, box);
	free(box);
	return (res);
}

bool check_str(char *str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] == '\n')
			return (true);
	return (false);
}

char *get_crate(char *str)
{
	char *s;
	int i;
	int j;

	for (j = 0; str[j]; j++);
	for (i = 0; str[i] != '\n' && str[i]; i++);
	if (str[i] == '\0')
		return (NULL);
	s = malloc(sizeof(char) * (j - i));
	i++;
	for (j = 0; str[i] != '\0'; j++)
		s[j] = str[i++];
	s[i] = '\0';
	return (s);
}

char *get_next_line(int fd)
{
	char *buf = malloc(sizeof(char) * (READ_SIZE + 1));
	char *res = "";
	static char *crate = "";

//	printf("crate: %s\n", crate);
	if (buf == NULL)
		return (NULL);
	if (check_str(crate) == true) {
		res = cut_till_nextline(res, crate);
		crate = get_crate(crate);
//		printf("res: %s\n", res);
		return (res);
	} else
		res = my_strcat(res, crate);
	read(fd, buf, READ_SIZE);
	while (check_str(buf) == false) {
		res = cut_till_nextline(res, buf);
		read(fd, buf, READ_SIZE);
	}
	res = cut_till_nextline(res, buf);
	crate = get_crate(buf);
	free(buf);
//	printf("res: %s\n", res);
	return (res);
}
