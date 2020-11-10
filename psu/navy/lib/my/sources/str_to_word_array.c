/*
** EPITECH PROJECT, 2018
** lib : str_to_word_array
** File description:
** turns a str into an array
*/

#include "my.h"

void free_array(char **array)
{
	for (int i = 0; array[i]; i++)
		free(array[i]);
	free(array);
}

char *fill_column(char *str, int i, int j)
{
	char *new = NULL;

	if (i == my_strlen(str) - 1)
		i++;
	new = malloc(sizeof(char) * (i - j));
	if (new == NULL)
		return (NULL);
	new[i] = '\0';
	for (int count = -1; j != i; j++)
		new[++count] = str[j];
	return (new);
}

int count_words(char *str, char c)
{
	int words = 0;

	if (str == NULL)
		return (-1);
	for (int i = 0; str[i]; i++)
		if (str[i] == c)
			words++;
	return (words);
}

char **str_to_word_array(char *str, char c)
{
	int words = count_words(str, c);
	char **array = NULL;
	int j = 0;

	if (words == -1)
		return (NULL);
	array = malloc(sizeof(char *) * (words + 2));
	if (array == NULL)
		return (NULL);
	words = 0;
	for (int i = 0; str[i]; i++) {
		if (str[i] == c || str[i + 1] == '\0') {
			array[words] = fill_column(str, i, j);
			words++;
			i++;
			j = i;
		}
	}
	array[words + 1] = NULL;
	return (array);
}
