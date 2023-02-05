#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in the DLL
 *
 * @h: pointer to the headhead of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int result;

	result = 0;

	if (h == NULL)
		return (result);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		result++;
		h = h->next;
	}

	return (result);
}
