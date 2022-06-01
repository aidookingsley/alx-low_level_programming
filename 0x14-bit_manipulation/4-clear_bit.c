#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	number = ~(number << index);
	*n = *n & number;

	return (1);
}
