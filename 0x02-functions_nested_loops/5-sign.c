#include "main.h"

/**
 * print_sign - checks if a variable is positive, negative or zero
 * @n: a variable that holds number to be checked
 * Return: 1. if variable n is positive, 0. if variable is zero
 * and -1 if negative
 */

int print_sign(int n)
{
	int x = n;

	if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);

}
