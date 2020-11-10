/*
** EPITECH PROJECT, 2017
** CPool_Day04
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
	int i = -1;

	while (str[++i] != '\0');
	return (i);
}
