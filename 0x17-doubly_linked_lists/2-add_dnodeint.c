#include "lists.h"

/**
 * add_dnodeint - adds a new node to the head of the DLL
 *
 * @head: pointer to the head
 * @n: value of the new node
 * Return: pointer to the element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dll;
	dlistint_t *h;

	new_dll = malloc(sizeof(dlistint_t));
	if (new_dll == NULL)
		return (NULL);

	new_dll->n = n;
	new_dll->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_dll->next = h;

	if (h != NULL)
		h->prev = new_dll;

	*head = new_dll;

	return (new_dll);
}
