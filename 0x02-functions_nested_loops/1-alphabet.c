#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * @x: to hold value for character
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}