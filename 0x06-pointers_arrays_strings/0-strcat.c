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
	int i, j = 0;

	while (dest[j])
	{
		j++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
