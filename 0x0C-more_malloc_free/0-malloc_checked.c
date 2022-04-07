#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to alllocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
