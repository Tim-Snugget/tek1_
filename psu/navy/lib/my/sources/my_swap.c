/*
** EPITECH PROJECT, 2017
** lib : my_swap
** File description:
** swaps the content of two integers, whose addresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
