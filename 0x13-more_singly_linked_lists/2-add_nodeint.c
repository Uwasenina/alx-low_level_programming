#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to a pointer pointing to first item in the linked list
 * @n: integer to assign to the node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;

	*head = newnode;
	return (newnode);
}

