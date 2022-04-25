#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head/first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}
