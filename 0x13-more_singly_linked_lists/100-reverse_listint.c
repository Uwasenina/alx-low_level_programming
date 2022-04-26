#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *w;

	if (!(head))
		return (NULL);
	w = NULL;
	next_node = (*head)->next;
	(*head)->next = w;
	w = *head;

	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = w;
		w = *head;
	}

	return (*head);
}
