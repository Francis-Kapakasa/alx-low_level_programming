#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char *lower_case_alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (*lower_case_alphabet)
	{
		_putchar(*lower_case_alphabet);
		lower_case_alphabet++;
	}
	_putchar("\n");
	return (0);
}
