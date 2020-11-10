/*
** EPITECH PROJECT, 2017
** lib : my.h
** File description:
** prototypes
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);
void my_free(void *ptr);
void *my_malloc(int size);
void my_free_tab(char **tab);
char *my_realloc_str(char *str, int size);
void *my_memset(void *ptr, int c, size_t size);
void *my_smalloc(void *ptr, int c, size_t size);
int my_getnbr(char *str);
int check_number(char *str);
int my_putnbr(int nb);
int my_putnbr_unsigned(unsigned int nb);
void my_putchar(char c);
void my_putnbr_base(int nb, char const *start_base);
int my_putstr(char const *str);
void my_putarray(char **array);
int my_nbrlen(int nb, int base_len);
int my_strcmp(char *s1, char *s2);
int my_strcmp_spe(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int n);
int my_strlen(char const *str);
char *my_strxcpy(char *dest, char *src, int x);
char *my_strcat_dup(char *str1, char *str2);
char **str_to_word_array(char *str, char c);
int count_words(char *str, char c);
char *fill_collumn(char *str, int i, int j);
void free_array(char **array);
int my_puterror(int err_code);
void my_nanosleep(int sec, int nsec);

#endif
