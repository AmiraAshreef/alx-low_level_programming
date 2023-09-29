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
	unsigned int   x = 0;

	int i;

	if (b == NULL)
	return (0);

	for (x = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			x = (x << 1) | 1;
		 if (b[i] == '0')
			x <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (x);
}
