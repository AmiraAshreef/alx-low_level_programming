#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{

	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	unsigned int power = 1;

	int len ;

	int len;
   for (len = 0; b[len] != '\0'; len++)
		;

	for (int i = len - 1; i >= 0; i--)
	{

		if (b[i] == '0' || b[i] == '1')
		{

			result += (b[i] - '0') * power;

			power *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
