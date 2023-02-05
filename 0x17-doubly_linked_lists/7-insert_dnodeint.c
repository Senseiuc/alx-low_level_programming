#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given index
 *
 * @h: pointer to the head of the dll
 * @idx: index of the new node
 * @n: value of the new node
 * Return: NULL if it failed, the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_dll_ptr;
	dlistint_t *dll_head;
	unsigned int i;

	new_dll_ptr = NULL;
	if (idx == 0)
		new_dll_ptr = add_dnodeint(h, n);
	else
	{
		dll_head = *h;
		i = 1;
		if (dll_head != NULL)
			while (dll_head->prev != NULL)
				dll_head = dll_head->prev;
		while (dll_head != NULL)
		{
			if (i == idx)
			{
				if (dll_head->next == NULL)
					new_dll_ptr = add_dnodeint_end(h, n);
				else
				{
					new_dll_ptr = malloc(sizeof(dlistint_t));
					if (new_dll_ptr != NULL)
					{
						new_dll_ptr->n = n;
						new_dll_ptr->next = dll_head->next;
						new_dll_ptr->prev = dll_head;
						dll_head->next->prev = new_dll_ptr;
						dll_head->next = new_dll_ptr;
					}
				}
				break;
			}
			dll_head = dll_head->next;
			i++;
		}
	}

	return (new_dll_ptr);
}
