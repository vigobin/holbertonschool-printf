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
	int (*specifier)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			put_char(format[i]);
			char_count++;
		}
		if (!format[i])
			return (char_count);

		specifier = format_specifier(&format[i + 1]);
		if (specifier != NULL)
		{
			char_count += specifier(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		put_char(format[i]);
		char_count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;

	}
	va_end(ap);
	return (char_count);
}
