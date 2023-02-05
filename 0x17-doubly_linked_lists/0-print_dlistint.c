#include "lists.h"

/**
 * print_dlistint - prints all the nodes in a DLL
 *
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int result;

	result = 0;

	if (h == NULL)
		return (result);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		result++;
		h = h->next;
	}

	return (result);
}
