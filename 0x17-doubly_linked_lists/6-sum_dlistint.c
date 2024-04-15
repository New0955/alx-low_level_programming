#include "lists.h"
#include <string.h>

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: store all nodes
 * Return: The sum of all the data.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next++;

	}
	return (sum);

}
