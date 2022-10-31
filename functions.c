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
