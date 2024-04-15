#include "lists.h"
#include <string.h>
/**
 * dlistint_t - function that adds a new node at the end
 * @head: store a value
 * @n: data value
 * @new: new memory for allocation
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;
	
	new = malloc(sizeof(dlistint_t));
        new->n = n;
        new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);	
}
