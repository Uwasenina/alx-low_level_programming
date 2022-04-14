#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: arraysearch through
 * @size: size of array
 * @cmp: function to pointer
 * Return: first index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
