#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Succcess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
