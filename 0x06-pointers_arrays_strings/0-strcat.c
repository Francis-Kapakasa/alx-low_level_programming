#include "main.h"
#include <stdio.h>

/**
 * *_strcat - merges two strings
 * @dest: string
 * @src: string to be appended to dest
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; i > 0; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
	}

	for (j = 0; j > 0; j++)
	{
		if (src[j] == '\0')
		{
			break;
		}
	}

	for (k = 0; k < (i + j); k++)
	{
		if (k == i)
		*(dest + k) = ' ';

		else if (k == (i + 1))
		{
			*(dest + k) = *(src);
		}

		else if (k > (i + 1))
		{
			*(dest + k) = *(src + (k - i - 1));
		}
	}

	return (dest);
}
