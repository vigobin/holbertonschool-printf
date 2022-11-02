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
	char *(*f)(va_list);
} op_t;

int put_char(char c);
int _printf(const char *format, ...);
void _puts(char *str);
void print_number(int n);

#endif
