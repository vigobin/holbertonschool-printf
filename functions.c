#include "main.h"

/**
 * put_char - writes the character c to output.
 * @c: The character to print
 * Return: On success 1.
 */

int put_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str : string input.
 * Return: 0
 */

void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		put_char(str[length]);
	}
	put_char('\n');
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		put_char('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	put_char((num % 10) + '0');
}
