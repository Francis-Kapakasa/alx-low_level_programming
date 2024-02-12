#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: number to calculate factorial of
 *
 * Return: factorial
 *
 */

int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(1 - n));
	}

	else
	{
		return (-1);
	}
}
