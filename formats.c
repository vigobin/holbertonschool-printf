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
 * Return: length of characters.
 */

int spec_c(va_list c)
{
	int lencount = 0;

	if (!c)
		return (0);

	put_char(va_arg(c, int));
	lencount++;

	return (lencount);
}

/**
 * spec_s - output this string.
 * @s: string to print.
 * Return: string length.
 */

int spec_s(va_list s)
{
	char *str = va_arg(s, char *);
	int len;

	if (str == NULL)
		str = "(null)";

	for (len = 0; str[len]; len++)
	{
		put_char(str[len]);
	}
	return (len);
}

/**
 * spec_d - output integer, also applied to i.
 * @d: integer to print.
 * Return: length of numbers.
 */

int spec_d(va_list d)
{
	int i, div, numcount;
	int number = va_arg(d, int);
	char intmin[11] = {"-2147483648"};

	div = 1;
	numcount = 0;
	if (number == INT_MIN)
	{
		for (i = 0; i <= 10; i++)
		{
			put_char(intmin[i]);
			numcount++;
		}
		return (numcount);
	}
	if (number < 0)
	{
		put_char('-');
		number = -number;
		numcount++;
	}
	while ((number / div) >= 10)
	{
		div *= 10;
	}
	while (div >= 1)
	{
		put_char((number / div) + '0');
		number = number % div;
		div /= 10;
		numcount++;
	}
	return (numcount);
}
