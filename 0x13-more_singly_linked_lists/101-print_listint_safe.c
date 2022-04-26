#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list
 * @head: pointer to a struct
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;

	while (head && (head > head->next))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++c;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		++c;
	}
	return (c);
}
