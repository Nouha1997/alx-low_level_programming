#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: input string.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	size_t len = strlen(s);
	
	for (int i = len -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
