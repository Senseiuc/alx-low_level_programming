#include "lists.h"

/**
 * sum_dlistint - returns the sum of all values in a DLL
 *
 * @head: pointer to the head of the list
 * Return: sum of the data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
