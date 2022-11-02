#include "main.h"

/**
 *format_specifier - function that selects the correct format.
 *@f: operator passed as argument to the program.
 *Return: NULL for no match.
 */

int (*format_specifier(const char *f))(va_list)
{
	int i;

	op_t opsel[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"%", spec_perc},
		{"d", spec_d},
		{"i", spec_i},
		{NULL, NULL}
	};

	i = 0;

	while (opsel[i].op)
	{
		if (*(opsel[i].op) == *f)
			return (opsel[i].f);
		i++;
	}
	return (0);
}

/**
 * spec_c - output char.
 * @c: character to print.
 * Return: 0
 */

int spec_c(va_list c)
{
	put_char(va_arg(c, int));
	return (0);
}

/**
 * spec_s - output this string.
 * @s: string to print.
 * Return: 0
 */

int spec_s(va_list s)
{
	char *str = va_arg(s, char *);

	_puts(str);
	return (0);
}

/**
 * spec_perc - output percentage sign.
 * @p: print %.
 * Return: 0
 */

int spec_perc(__attribute__((unused))va_list p)
{
	put_char('%');

	return (0);
}

/**
 * spec_d - output integer.
 * @d: integer to print.
 * Return: 0
 */

int spec_d(va_list d)
{
	print_number(va_arg(d, int));

	return (0);
}

/**
 * spec_i - output integer.
 * @i: integer to print.
 * Return: 0
 */

int spec_i(va_list i)
{
	print_number(va_arg(i, int));

	return (0);
}
