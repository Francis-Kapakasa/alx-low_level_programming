#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n, n > 98, n--)
		{
			printf(n", ");
		}
		printf(98"\n");
	}
	else
	{
		for (n, n <= 98, n++)
		{
			printf(n", ");
		}
		printf(98"\n");
	}
}
