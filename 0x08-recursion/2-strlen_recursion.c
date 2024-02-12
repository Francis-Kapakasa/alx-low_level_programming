#include "main.h"

/**
 * _strlen_recursion - calculates length of string
 *
 * @s: string
 *
 * Return: Length of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		int x = *s;
		return x;
	}
	s++;
	_strlen_recursion(s);
}


