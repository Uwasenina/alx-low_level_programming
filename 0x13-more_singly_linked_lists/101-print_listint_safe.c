#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list
 * @head: pointer to a struct
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->next);
		if (d < 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
