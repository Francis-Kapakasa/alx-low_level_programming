#include "main.h"

/**
 * _puts_recursion - Prints string
 * @s - a pointer to a character in sting
 *
 * Return: 1 on success
 *
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		
	}
	_putchar (*s);
	s = s + 1;
	_puts_recursion (s);
}
