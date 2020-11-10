/*
** EPITECH PROJECT, 2018
** my_str_to_word_tab.c
** File description:
** get str to put in into an array
*/

#include "my.h"

char *copy_word(char const *str, char c)
{
	static int i = 0;
	int pt;
	int len;
	char *res;

	if (i == 0)
		for (; str[i] == c; i++);
	for (pt = i; str[pt] != c && str[pt]; pt++);
	len = pt - i;
	res = malloc(sizeof(char) * (len + 1));
	for (int q = 0; q != len; q++)
		res[q] = str[i++];
	res[len] = '\0';
	for (; str[i] == c && str[i]; i++);
	if (str[i] == '\0')
		i = 0;
	return (res);
}

unsigned int count_words(char const *str, char c)
{
	unsigned int cnt = 0;

	for (int i = 0; str[i]; i++)
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			cnt++;
	return (cnt);
}

char **my_str_to_word_tab(char const *str, char c)
{
	unsigned int nb_w = count_words(str, c);
	char **res = NULL;

	if (nb_w == 0)
		return (NULL);
	res = malloc(sizeof(char *) * (nb_w + 1));
	if (res == NULL)
		return (NULL);
	for (unsigned int x = 0; x != nb_w; x++)
		res[x] = copy_word(str, c);
	res[nb_w] = NULL;
	return (res);
}
