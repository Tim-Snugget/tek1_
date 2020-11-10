/*
** EPITECH PROJECT, 2017
** my_printf : include
** File description:
** prototypes
*/

#ifndef __PRINTF_H__
#define __PRINTF_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my.h"

typedef struct count {
	int modulo;
	int i;
	int type;
	int hash;
	int plus;
	int minus;
	int space;
	int zero;
} count_t;

int my_printf(char const *str, ...);
void init_count(count_t *count);
int check_modulo(char const *str, count_t *count);
int get_syntax(char const *str, va_list ap, count_t *count);
int count_modulo_in_str(char const *str,  count_t *count);
void disp_end_str(char const *str, count_t *count);
int show_before_modulo(char const *str, count_t *count);
void init_params(count_t *count);
int parameter(char const *str, count_t *count);
int flags(char const *str, va_list ap, count_t *count);
int type(char const *str, va_list ap, count_t *count);
int print_char(va_list ap, count_t *count);
int print_int(va_list ap, count_t *count);
int print_modulo(count_t *count);
int print_string(va_list ap, count_t *count);
int print_unsigned_int(va_list ap, count_t *count);
int print_hexa_lower(va_list ap, count_t *count);
int print_hexa_upper(va_list ap, count_t *count);
int print_octal(va_list ap, count_t *count);
int print_binary(va_list ap, count_t *count);
int print_pointer(va_list ap, count_t *count);
int print_non_printable_chars(va_list ap, count_t *count);
void my_putstr_non_printable_chars(char const *str);
void handle_non_printable_chars(char const *str, int count);

#endif
