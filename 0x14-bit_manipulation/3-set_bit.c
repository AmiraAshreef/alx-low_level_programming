#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index to set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	while (index >= (sizeof(unsigned long int) * 8))
	{
	return (-1);
	}

	*n |= (1 << index);

	return (1);
}