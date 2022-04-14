#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function givenas a perameter on eachelement of array
 * @array: pointer
 * @size: unsigned int
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		return;

	for (i = 0; i < size; i++)
		action(array[i];
}
