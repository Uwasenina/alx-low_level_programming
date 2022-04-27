#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: the head of list to find the loop
 * Return: the address if the node where the looop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
