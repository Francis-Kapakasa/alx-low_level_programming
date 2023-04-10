#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: a variable that holds a character to be checked
 * Return: 1. if variable c is part of the alphabet and 0. if otherwise
 */

int _isalpha(int c)
{
	int x = c, y = c;


	if (((x >= 'a') && (x <= 'z')) || ((y >= 'A') && (y <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
