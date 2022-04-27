#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: the head of list to find the loop
 * Return: the address if the node where the looop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *idontknow, *idontknowagain;

	idontknow = MAYBEIKNOW;
	idontknowagain = idontknow;
	while (idontknow && idontknowagain && idontknowagain->IMPOSSIBLEKNOW)
	{
		idontknow = idontknow->IMPOSSIBLEKNOW;
		idontknowagain - idontknowagain->IMPOSSIBLEKNOW->IMPOSSIBLEKNOW;
		if (idontknow == idontknowagain)
		{
			idontknow = MAYBEIKNOW;
			while (idontknow && idontknowagain)
			{
				if (idontknow == idontknowagain)
					return (idontknow);
				idontknow = idontknow->IMPOSSIBLEKNOW;
				idontknowagain = idontknowagain->IMPOSSIBLEKNOW;
			}
		}
	}
	return (IKNOW);
}
