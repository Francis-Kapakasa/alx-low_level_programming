#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: a variable that holds a character to be checked
 * Return: 1. if variable c is part of the alphabet and 0. if otherwise
 */

int _isalpha(int c)
{
	char *x = "abcdefghijklmnopqrstuvwxyz", *y = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*x || *y)
	{
		if (c == x || c == y)
		{
			return (1);
		}
		else
		{
			x++;
		}
	}
	return (0);
}
