/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my .h
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <stdlib.h>

int	my_getnbr(char const *str);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
char	*my_strcpy(char *dest, char const *src);
int	my_strcmp(char const *s1, char const *s2);
char	*my_strupcase(char *str);
char	*my_strlowercase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
void	my_sort_int_array(int *tab, int size);
void	my_swap(int *a, int *b);
char	*my_strdup(char const *str);

#endif
