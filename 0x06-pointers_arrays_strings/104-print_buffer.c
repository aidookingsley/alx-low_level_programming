#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if(i % 2)
			printf(" ");
		i++;
	}
}
