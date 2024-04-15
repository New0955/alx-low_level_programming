#include "lists.h"
#include <string.h>

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: first value
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
