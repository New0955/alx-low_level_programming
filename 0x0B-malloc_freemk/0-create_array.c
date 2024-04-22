#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *al;
	unsigned int i;

	if(size == 0)
		return(NULL);
	al = malloc(sizeof(c) * size);

	for(i = 0; i < size; i++)
		c = al[i];
	return(al);



