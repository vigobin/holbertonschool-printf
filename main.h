#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int put_char(char c);
int _printf(const char *format, ...);
void _puts(char *str);
void print_number(int n);
int spec_c(va_list c);
int spec_s(va_list s);
int spec_perc(va_list p);
int spec_d(va_list d);
int spec_i(va_list i);

#endif
