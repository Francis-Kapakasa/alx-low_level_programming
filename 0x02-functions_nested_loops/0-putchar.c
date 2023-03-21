#include <stdio.h>
#include "main.h"

/**
 * print_char - prints _putchar
 * Return: Always 0.
 */

char print_char(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	return (0);
}

/**
 * main - calls function print_char and prints new line
 * Return: Always 0.
 */

int main(void)
{
	print_char();
	_putchar('\n');

	return (0);
}
