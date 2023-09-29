#include "main.h"

/**
 * flip_bits - function that returns the number of bits  need to flip
 *              to get from one number to another
 * @n: The number1.
 * @m: The number2 to flip n to.
 *
 * Return: The  number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int XOR = n ^ m;
	int c = 0;

	while (XOR)
	{
	XOR = XOR & (XOR - 1);
	c++;
	}
	return (c);
}
