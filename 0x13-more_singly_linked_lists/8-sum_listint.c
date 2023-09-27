#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a  list.
 * @head: A pointer to the head of the  list.
 *
 * Return: If the list is empty - 0.
 *         else - the sum of all the data in list .
 */
int sum_listint(listint_t *head)
{
	int sumall = 0;

	while (head)
	{
		sumall += head->n;
		head = head->next;
	}

	return (sumall);
}
