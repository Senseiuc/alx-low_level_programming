#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the DLL
 *
 * @head: pointer to the head
 * @n: value of the node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_dll;

	new_dll = malloc(sizeof(dlistint_t));
	if (new_dll == NULL)
		return (NULL);

	new_dll->n = n;
	new_dll->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_dll;
	}
	else
	{
		*head = new_dll;
	}

	new_dll->prev = h;

	return (new_dll);
}
