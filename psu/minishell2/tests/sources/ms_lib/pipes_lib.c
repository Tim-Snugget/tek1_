/*
** EPITECH PROJECT, 2018
** minishell
** File description:
** pipes additionnal little fcts
*/

#include "ms.h"

int get_nb_pipes(char **arr)
{
	int cnt = 0;

	if (my_strcmp(arr[0], "|") == 0)
		return (return_null_command());
	for (int i = 0; arr[i]; i++) {
		if (my_strcmp(arr[i], "|") == 0)
			cnt++;
		if (i != 0 && !my_strcmp(arr[i], "|")
		&& !my_strcmp(arr[i - 1], "|"))
			return (return_null_command());
		if (my_strcmp(arr[i], "|") == 0 && arr[i + 1] == NULL)
			return (return_null_command());
	}
	return (cnt);
}

char **cut_tab(char **arr, char *cut, int i)
{
	char **ptr;
	int beg;
	int end;

	if (i == 0) {
		for (end = 0; arr[end] && my_strcmp(arr[end], cut); end++);
		ptr = my_malloc(sizeof(char *) * (end + 1));
		ptr[end] = NULL;
		for (beg = 0; beg < end; ptr[beg] = arr[beg], beg++);
		return (ptr);
	}
	for (int cnt = i; cnt > 0 && arr[beg]; beg++)
		if (my_strcmp(arr[beg], cut) == 0)
			cnt--;
	for (end = ++beg; arr[end] && my_strcmp(arr[end], cut); end++);
	ptr = my_malloc(sizeof(char *) * (end - beg + 1));
	for (int t = 0; t < end - beg; ptr[t] = arr[end - beg + t], t++);
	ptr[end - beg] = NULL;
	return (ptr);
}
