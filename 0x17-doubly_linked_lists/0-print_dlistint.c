#include <string.h>
#include "lists.h"
/**
 *dlistint_t list - function that prints all the elements
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}


