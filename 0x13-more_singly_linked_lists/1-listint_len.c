#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked
 * @h: pramter of function
 *
 * Return:  number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t  count;

	for (count = 0; h != NULL; ++count)
	h = h->next;
	return (count);
}
