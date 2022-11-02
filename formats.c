#include "main.h"

/**
 *format_specifier - function that selects the correct format.
 *@f: operator passed as argument to the program.
 *Return: function pointer.
 */

int (*format_specifier(const char *f))(va_list)
{
	int i;

	op_t opsel[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"d", spec_d},
		{"i", spec_d},
		{NULL, NULL}
	};

	i = 0;

	while (opsel[i].op)
	{
		if (*(opsel[i].op) == *f)
		{
			break;
		}
		i++;
	}
	return (opsel[i].f);
}

/**
 * spec_c - output char.
 * @c: character to print.
 * Return: 0 Always.
 */

int spec_c(va_list c)
{
	put_char(va_arg(c, int));
	return (0);
}

/**
 * spec_s - output this string.
 * @s: string to print.
 * Return: 0 Always.
 */

int spec_s(va_list s)
{
	char *str = va_arg(s, char *);

	_puts(str);
	return (0);
}

/**
 * spec_d - output integer, also applied to i.
 * @d: integer to print.
 * Return: 0 always.
 */

int spec_d(va_list d)
{
	print_number(va_arg(d, int));
	return (0);
}
