#include "main.h"


/**
 * binary_to_uint - function to converts a binary number to an
 *  unsigned int.
 * @b: binary numder .
 *
 * Return: the converted number, or 0 if.
 */


unsigned int binary_to_uint (const char *b)
{
	unsigned int y = 1,  x = 0;

	int i;

	unsigned int len;

	len = strlen(b);

	if (b == NULL)
	return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		if (b[i] == '1')
	{
		x += y;
	}
	y *= 2;
	}
	return (x);
}
