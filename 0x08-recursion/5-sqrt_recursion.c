#include "main.h"

/**
 * check_sqrt_root - to check if a number has a sqrt
 * @i: sqrt test integer
 * @k: number being tested
 *
 * Return: natural square root or -1 if it doesnt exist
 *
 */

int check_sqrt_root(int i, int k)
{
	if (i * i == k)
	{
		return (i);
	}

	else if (i * i > k)
	{
		return (-1);
	}

	else
	{
		return (check_sqrt_root(i + 1, k));
	}
}

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
	if (n > 0)
	{
		return (check_sqrt_root(1, n));
	}

	else
	{
		return (-1);
	}
}
