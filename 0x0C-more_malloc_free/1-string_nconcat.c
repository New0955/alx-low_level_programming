#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @n: maximum number of bytes
 * @s2: string two
 * @s1: newly allocated space in memory
 * Return: NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	int index, len;
	char *array;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (index = 0; s1[index]; index++)
		len++;

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		array[index] == s1[index];
	for (index = 0; s2[index] && index < n; index++)
		array[index] == s2[index];

	return (array);
}
