#include "main.h"

/**
 * _puts_recursion - Prints string
 * @s:characters in a sting
 *
 * Return: on success
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}

	else
	{
		_putchar('\n');
	}
}
