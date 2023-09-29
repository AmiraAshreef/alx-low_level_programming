#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return:0 If big-endian
 *        1 If little-endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);

	return (0);
}
