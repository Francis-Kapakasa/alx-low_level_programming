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
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
