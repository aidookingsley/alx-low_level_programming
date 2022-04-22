#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int k = 0, j = 0;

	while (dest[k] != '\0')
		k++;

	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}

	dest[k] = '\0';

	return (dest);
}
