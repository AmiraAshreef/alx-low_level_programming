#include "main.h"

/**
 *
 * print_binary - prints decimal as binary
 * @n: long integer
 *
 *Return: binary number , or 0.
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	if (n > 1)
		print_binary(n >> 1);
		x = ((n & 1) + '0');

	putchar(x);
}
