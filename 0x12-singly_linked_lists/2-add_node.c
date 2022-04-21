#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *add_node -functions that adds new node at the beginning of a list
 * @str: string for add in the node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == 0)
	{
		free(new);
		return (0);
	}
	new->str = string;
	new->len = _strlen(string);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - function that indicates the length of the char
 * @str: char
 * Return: length of char
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
