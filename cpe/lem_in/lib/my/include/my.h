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
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

char	**my_add_alloc_tab(char **tab);
int	my_find_char(char *str, char c);
void	my_free(void *ptr);
void	my_free_tab(char **tab);
int	my_getnbr(char *str);
bool	my_isalpha(char c);
bool	my_isnum(char c);
void	*my_malloc(int size);
void	*my_smalloc(void *ptr, int c, size_t size);
void	*my_memset(void *ptr, int c, size_t n);
void	my_print_err(char *c);
void	my_putchar(char c);
void	my_putnbr(int nb);
void	my_putstr(char *str);
void	my_puts(char *str);
char	*my_realloc_str(char *str, int size);
int	my_strlen(char *str);
char	*my_strcat(char *dest, char *src);
char	*my_strcat_r(char *dest, char *s1, char *s2, int c);
char	*my_strcat_s(char *s1, char *s2, char c);
char	*my_strncat(char *dest, char *src, int n);
char	*my_strmalcat(char *s1, char *s2);
char	*my_strnmalcat(char *s1, char *s2, int n);
char	*my_strcpy(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_substr(char *str, int start, int nb);
char	**my_str_to_word_tab(char *str, char c);
void	my_swap(int *a, int *b);
char	*my_strdup(char *str);
char	*my_strndup(char *str, int n);

#endif
