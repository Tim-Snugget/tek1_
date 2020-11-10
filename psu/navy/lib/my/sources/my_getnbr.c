/*
** EPITECH PROJECT, 2017
** lib : my_getnbr.c
** File description:
** get a number from a string to return an int value
*/

int check_number(char *str)
{
	int i = 0;

	while ((str[i] < '0' || str[i] > '9') && str[i])
		i++;
	if (str[i] == '\0')
		return (-1);
	return (i);
}

int my_getnbr(char *str)
{
	int nb = 0;
	int n = check_number(str);
	int sign = 1;

	if (n == -1)
		return (0);
	for (int i = n - 1; i != -1 && (str[i] == '+' || str[i] == '-'); i--) {
		if (str[i] == '-')
			sign = -sign;
		i--;
	}
	for (int i = n; str[i] && str[i] >= '0' && str[i] <= '9'; i++) {
			nb += str[i] - '0';
			nb *= 10;
		}
		nb /= 10;
		return (nb * sign);
}
