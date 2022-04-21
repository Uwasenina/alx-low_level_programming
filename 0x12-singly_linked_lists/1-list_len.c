#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: Length of the list
 */

size_t list_len(const list_t *h)
{
	const list_t *node = h;
	unsigned int length = 0;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		length++;
		node = node->next;
	}
	return (length);
}
