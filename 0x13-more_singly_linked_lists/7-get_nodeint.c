#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to first node of the linked list
 * @index: index of node to returned
 * Return: the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head; unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp = head;

	while (tmp && (counter < index))
	{
		tmp = tmp->next;
		counter++;
	}
	if (counter < index)
		return (NULL);

	return (tmp);
}
