#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
        char *lower_case_alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int x = 0, x<10,x++)
	{
		 while (*lower_case_alphabet)
        	{
                _putchar(*lower_case_alphabet);
                lower_case_alphabet++;
        	}
		 _putchar("\n");
	}
        return (0);
}
