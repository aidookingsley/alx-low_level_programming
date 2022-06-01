#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, j;
	unsigned int number = 0, non_binary = 9;

	if (b == NULL)
		return (non_binary);

	while (b[len] != '\0')
		len++;
	len-= 1;


	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);

		if (b[j] == '1')
			number += (1 * ( << len));
		j++;
		len--;
	}

	return (number);
}
