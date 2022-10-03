#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializes it with a specific char
 * @size: size of array to be created
 * @c: the char to initialize array with
 * Return: pointer to the array or null if malloc fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int q;
	char *r;

	if (size == 0)
		return (NULL);
	r = malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < size; q++)
	{
		r[q] = c;
	}
	return (r);
}
