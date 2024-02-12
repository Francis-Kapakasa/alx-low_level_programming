#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *
 * @x: a number to be set to the power
 * @y: the power value
 *
 * Return: value and -1 if y value is less than 0
 *
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y -1));
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (-1);
	}
}
