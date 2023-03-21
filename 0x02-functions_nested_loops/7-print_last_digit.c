#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: variable to be find last digit from, @y: last digit
 *
 * Return: last digit.
 */

int print_last_digit(int x)
{
	int y;

	if (x >= 0)
	{
		y = x % 10;
		_putchar(y);
		return (y);
	}
	else
	{
		y = -(x % 10);
		_putchar(y);
		return (y);
	}

	return (y);
}
