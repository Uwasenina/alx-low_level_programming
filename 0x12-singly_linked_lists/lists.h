#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - singly linked lists
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */

struct list
{
	char *str;
	unsigned int len;
	struct list *next;
};

typedef struct list list_t;

int _strlen(char *str);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
