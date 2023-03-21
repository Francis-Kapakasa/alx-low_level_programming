#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int x = n;

	if (x > 98)
	{
		for (x; x > 98; x--)
		{
			printf("%d\n", x);

		}
		printf(98"\n");
	}
	else
	{
		for (x; x <= 98; x++)
		{
			printf("%d\n", x);
		}
		printf(98"\n");
	}
}
