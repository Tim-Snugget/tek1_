/*
** EPITECH PROJECT, 2017
** my_ls : my_strcatdup.c
** File description:
** my_strcatdup copies and malloc
*/

#include "my.h"

char *my_strcat_dup(char *str1, char *str2)
{
	int i = my_strlen(str1);
	int j = my_strlen(str2);
	int k = -1;
	char *str = malloc(sizeof(char) * (i + j));

	while (++k != i)
		str[k] = str1[k];
	i = -1;
	while (++i != j) {
		str[k] = str2[i];
		k++;
	}
	return (str);
}
