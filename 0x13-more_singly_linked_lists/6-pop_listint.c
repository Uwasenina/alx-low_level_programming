#include "lists.h"

/**
 * pop_listint - delete a head of node of linked list
 * @head: pointer the head of node
 * Return: the head of node
 */
int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int i;

	if (*head == NULL)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	i = node_to_delete->n;
	free(node_to_delete);

	return (i);
}
