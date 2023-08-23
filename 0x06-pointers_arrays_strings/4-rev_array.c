#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 * Return : Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j  = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[j];
		a[i] = end;
		a[j] = start;
		j--;
	}
}
