#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to a pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			free(placeholder);
		}
	}
}
