#include <main.h>

/**
 * _abs - calculates the absolute value of an integer
 * @x: variable to be calculated, @y: variable that holds absolute value of x
 *
 * Return: absolute value
 */

int _abs(int x)
{
	int y = x;

	if (y < 0)
	{
		y *= (-1);
		return (y);
	}

	else
	{
		return (y);
	}
}

