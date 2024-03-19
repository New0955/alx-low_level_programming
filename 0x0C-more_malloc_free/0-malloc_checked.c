#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function allocates memory
 * @b: integer value
 * Return: the pointer value
 */

void *malloc_checked(unsigned int b);
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);
	return (array);
}
