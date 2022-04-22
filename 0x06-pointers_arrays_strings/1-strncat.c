#include "main.h"

/**
 * _strncat - concatenate 2 strings.
 * @dest: first string.
 * @src: second string.
 * @n: number of bytes to be used from src.
 * Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	while (dest[j] != '\0')
		j++;

	while (src[k] != '\0' && n > k)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	if (n > 0)
	{
		dest[j] = '\0';
	}

	return (dest);
}
