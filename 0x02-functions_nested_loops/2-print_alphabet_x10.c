#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x, y = 0;

	while (y < 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
	return;
}
