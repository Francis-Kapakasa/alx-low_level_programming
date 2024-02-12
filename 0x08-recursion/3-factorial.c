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
	if (n <= 0)
	{
		return (-1);
	}

	else
	{
		return (n * (-1) * factorial(n - 1));
	}
}
