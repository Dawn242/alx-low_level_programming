#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: number of bytes
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointr;

	pointr = malloc(b);
	{
		if (!pointr)
			exit(98);
	}
	return (pointr);
}
