#include "lists.h"

/**
 * free_dlistint - frees a dll
 *
 * @head: pointer to the head the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_dll;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp_dll = head) != NULL)
	{
		head = head->next;
		free(temp_dll);
	}
}
