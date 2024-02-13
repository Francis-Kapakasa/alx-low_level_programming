#include "main.h"

/**
 * is_prime_number - checks if the input integer is a prime number
 *
 * @n: the number to be checked
 *
 * Return: 1 if number is prime and 0 if not
 *
 */

int is_prime_number(int n)
{
	if (n > 2 && n % 2 != 0)
	{
		return (1);
	}

	else if (n > 0 && n < 3)
	{
		return (1);
	}

	return (0);
}
