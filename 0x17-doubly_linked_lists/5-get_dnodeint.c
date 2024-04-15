#include "lists.h"
#include <string.h>

/**
 * dlistint_t - function that returns the nth node
 * @Return: if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
