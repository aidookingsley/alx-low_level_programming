#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
