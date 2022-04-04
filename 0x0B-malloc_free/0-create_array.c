#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: int
 * @c: char
 * Return: value
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);
	unsigned int i;

	if (a == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
