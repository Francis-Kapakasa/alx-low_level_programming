#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 on true and 0 on false
 *
 */

int is_palindrome(char *s)
{
	if (*s)
	{
		is_palindrome(s);
		s = s + 1;

		if (is_palindrome(s) == is_palindrome(s+1))
		{
			return (1);
		}

	}

	return (0);
}
