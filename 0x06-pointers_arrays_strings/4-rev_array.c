#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: an array
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (n = n; n > i; n--)
	{
		_putchar(a[n]);
	}
}
