/*
** EPITECH PROJECT, 2018
** checking_fctns.c
** File description:
** check functions - pos of the boats on the maps and so on 
*/

#include "navy.h"
#include "my.h"

bool check_other_column(char *str)
{
	if (str == NULL || my_strlen(str) != 2)
		return (false);
	if (str[0] < 'A' || str[0] > 'H')
		return (false);
	if (str[1] < '1' || str[1] > '8')
		return (false);
	return (true);
}

bool check_first_column(char *str)
{
	if (str == NULL || my_strlen(str) != 1)
		return (false);
	else if (str[0] < '2' || str[0] > '5')
		return (false);
	return (true);
}

bool check_line(char **arr)
{
	for (int i = 0; i != 3; i++) {
		if (i == 0 && check_first_column(arr[i]) == false)
			return (false);
		if ((i == 1 || i == 2) && check_other_column(arr[i]) == false)
			return (false);
	}
	if ((my_strcmp_spe(arr[1], arr[2]) * -1) + 1 != my_getnbr(arr[0]))
		return (false);
	return (true);
}

int check_pid(char *arg)
{
	int pid;

	for (int i = 0; arg[i]; i++)
		if (arg[i] < '0' || arg[i] > '9' || i > 7)
			return (-1);
	pid = my_getnbr(arg);
	if (kill(pid, 0) == -1)
		return (-1);
	return (pid);
}
