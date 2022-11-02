#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *format_specifier - function that selects the correct format.
 *@f: operator passed as argument to the program.
 *Return: NULL for no match.
 */

int (*format_specifier(char *f))(va_list args)
{
	int i;

	op_t opsel[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"%", spec_perc},
		{"d", spec_id},
		{"i", spec_id},
		{NULL, NULL}
	};

	i = 0;

	while (opsel[i].op)
	{
		if (*(opsel[i].op) == *f)
			return (opsel[i].f(args));
		i++;
	}
}

/**
 * spec_c - output char.
 * @c: character to print.
 * Return: 0
 */

int spec_c(va_list args)
{
	put_char(va_arg(args, int));
	return (1);
}

/**
 * spec_s - output this string.
 * @s: string to print.
 * Return: 0
 */

int spec_s(va_list args)
{
	char *s = va_arg(s, char *);
	int i = 0;

	if (s != NULL)
	{
		while (s[i])
		{
			put_char(s[i]);
			i++;
		}
		return (i);
	}

	return (NULL);
}

/**
 * spec_p - output percentage sign.
 * @p: print %.
 * Return: 0
 */

int spec_perc(va_list args)
{
	return (0);
}

/**
 * spec_d - output integer.
 * @d: integer to print.
 * Return: 0
 */

int spec_id(va_list args)
{
	int count = 1 b = 0;
	unsigned int n = 0;

	n = va_arg(d, int);
	m = n;
	if (m < 0)
	{
		put_char('-');
		b = b * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	
}

/**
 * re_integer - output integer.
 * @i: integer to print.
 * Return: 0
 */

int _re_integer(int ab)
{
	unsigned int l;

	l = ab;
	if (l / 10)
		_re_integer(l / 10);
	put_char(l % 10 + '0');
}
