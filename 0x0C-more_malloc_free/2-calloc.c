#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory chick to be allocated
*
*Return: poiner to the address of the memory chick
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *chick;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	chick = malloc(nmemb * size);
	if (chick != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			chick[i] = 0;
		return (chick);
	}
	else
		return (NULL);
}
