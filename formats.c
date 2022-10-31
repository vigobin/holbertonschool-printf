#include "main.h"

/**
 *format_specifier - function that selects the correct format.
 *@s: operator passed as argument to the program.
 *Return: NULL for no match.
 */

int (*format_specifier(char *s))(int, int)
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
		if (*(opsel[i].op) == *s)
			return (opsel[i].f);
		i++;
	}
	return (NULL);
}
