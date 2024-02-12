#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: characters in a string
 *
 * Return: on success
 *
 */

void _print_rev_recursion(char *s)
{
	if(*s)
	{
		s = s + 1;
		_print_rev_recursion(s);
		_putchar(*s);
	}

	else
	{
		_putchar('\n');
	}
}
