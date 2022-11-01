#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Character string composed of zero or more directives.
 * Return: The number of characters printed, excluding the null byte.
 */

int _printf(const char *format, ...)
{
	int i;
	va_list ap;
	char *c;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0; format != '\0'; i++)
	{
		if (format != '%')
		{
			put_char(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (0);
}
