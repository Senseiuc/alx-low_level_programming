#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dll_one;
	dlistint_t *dll_two;
	unsigned int i;

	dll_one = *head;

	if (dll_one != NULL)
		while (dll_one->prev != NULL)
			dll_one = dll_one->prev;

	i = 0;

	while (dll_one != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = dll_one->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				dll_two->next = dll_one->next;

				if (dll_one->next != NULL)
					dll_one->next->prev = dll_two;
			}

			free(dll_one);
			return (1);
		}
		dll_two = dll_one;
		dll_one = dll_one->next;
		i++;
	}

	return (-1);
}
