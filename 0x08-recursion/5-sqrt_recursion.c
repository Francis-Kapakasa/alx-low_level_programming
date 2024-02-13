#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: a number to calculate natural square root from
 *
 * Return: natural square root or -1 if it doesnt exist
 *
 */

int check_sqrt_root(int i, int k)
{
        if (i*i == k)
        {
                return (i);
        }

        else
        {
                return (-1);
        }
}

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		check_sqrt_root(1, n);
		return _sqrt_recursion(n);
	}

	else
	{
		return (-1);
	}
}
