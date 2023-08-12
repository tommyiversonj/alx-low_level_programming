#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
