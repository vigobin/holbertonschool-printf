#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	char *(*f)(va_list args);
} op_t;

int _printf(const char *format, ...);
int (*format_specifier(char *f))(va_list args);
int spec_c(va_list args);
int spec_s(va_list args);
int spec_perc(va_list args);
int spec_id(va_list args);
int _re_integer(int ab);
int put_char(char c);
void _puts(char *str);
void print_number(int n);
void print_strings (const unsigned int n, ...);

#endif
