#include "main.h"

/**
 * reset_ swap  - updates the value of the variable
 * the swap to int var a, b
 * @n: pointer to the variable to update
 */
void swap_int(int *a, int *b)
	{

	int  c;

	c  = *a;
	*a = *b;
	*b = c;

	}
