#include "main.h"

/**
 * jack_bauer - prints the every minute up to 24 hours
 * @x: hours, @y: minutes
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
	{
		if (x < 10)
		{
			for (y = 0; y < 60; y++)
			{
				if (y < 10)
				{
					_putchar('0');
					_putchar(x);
					_putchar(':');
					_putchar('0');
					_putchar(y);
				}
				else
				{
					_putchar('0');
                                        _putchar(x);
                                        _putchar(':');
                                        _putchar(y);
				}
			}
		}
		else
		{
			for (y = 0; y < 60; y++)
			{
				if (y < 10)
				{
                                        _putchar(x);
                                        _putchar(':');
                                        _putchar('0');
                                        _putchar(y);
				}
				else
				{
                                        _putchar(x);
                                        _putchar(':');
                                        _putchar(y);
				}
			}
		}
	}
	return (0);
}
