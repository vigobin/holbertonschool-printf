#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Character string composed of zero or more directives.
 * Return: The number of characters printed, excluding the null byte.
 */

int _printf(const char *format, ...)
{
	int i, char_count;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			/* need to update for format specifiers*/
			return (1);
		}
		else
		{
			put_char(format[i]);
			char_count++;
		}
	}
	va_end(ap);
	return (char_count);
}
