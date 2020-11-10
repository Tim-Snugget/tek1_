/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my .h
*/

#ifndef __MY_H__
#define __MY_H__

#ifndef READ_SIZE
#define READ_SIZE 10

#include <sys/stat.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>

int	my_array_size_c(char **arr);
int	my_array_size_i(int **arr);
char	*get_next_line(int fd);
char	*my_epurstr(char *str);
int	my_getnbr(char *str);
bool	my_empty_line(char *str);
void	my_free(void *ptr);
void	my_free_tab(char **tab);
void	my_kill(pid_t pid, int sig);
void	*my_malloc(int size);
void	*my_memset(void *ptr, int c, size_t n);
void	my_perror(char *name);
void	my_print_err(char *c);
void	print_tab(char **tab);
void	my_putarray(char **array);
void	my_putchar(char c);
void	my_putnbr(int nb);
void	my_putstr(char const *str);
void	my_puts(char const *str);
char	*my_realloc_str(char *str, int size);
int	my_strlen(char const *str);
char	*my_strcat(char *dest, char *src);
char	*my_strcat_r(char *dest, char const *s1, char const *s2, int c);
char	*my_strcat_s(char const *s1, char const *s2, char c);
char	*my_strcpy(char *dest, char const *src);
char	*my_strcut(char const *str, int n);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_substr(char *str, int start, int nb);
void	my_sort_int_array(int *tab, int size);
char	**my_str_to_word_tab(char const *str, char c);
void	my_swap(int *a, int *b);
char	*my_strdup(char const *str);
void	my_xerror(char *str);

#endif
#endif
