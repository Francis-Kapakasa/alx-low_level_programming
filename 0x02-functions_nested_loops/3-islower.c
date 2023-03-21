#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: a variable that holds a character to be checked
 * Return: 1. if variable c is lowercase and 0. if otherwise
 */

int _islower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
		x++
	}
	return (0);
}
