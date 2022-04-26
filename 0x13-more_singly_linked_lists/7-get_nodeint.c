#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer to the list
 * @index: index of node to returned
 * Return: the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cnt = 0;

	while (node && cnt != index)
	{
		cnt++;
		node = node->next;
	}
	if (node && cnt == index)
		return (node);
	return (NULL);
}
