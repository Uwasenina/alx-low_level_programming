#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list
 * @h: address of the first item in the list
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
