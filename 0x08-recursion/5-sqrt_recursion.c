#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: a number to calculate natural square root from
 *
 * Return: natural square root or -1 if it doesnt exist
 *
 */

int _sqrt_recursion(int n)
{
	if ((n % _sqrt_recursion(n - 1)) == 0 && _sqrt_recursion(n - 1) * _sqrt_recursion(n - 1) == n)
	{
		return _sqrt_recursion(n);
	}

	else
	{
		return (-1);
	}
}
