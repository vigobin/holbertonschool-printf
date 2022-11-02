#include "main.h"

/**
 *format_specifier - function that selects the correct format.
 *@f: operator passed as argument to the program.
 *Return: NULL for no match.
 */

int _printf(const char *format, ...)
{
	va_list args;
	
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
	va_end(args);
	return (0);
}
