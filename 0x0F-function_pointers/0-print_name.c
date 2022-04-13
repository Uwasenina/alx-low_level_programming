#include "function_ponters"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: char pointer
 * @f: void
 * Return: void
 */

void print_name(char *name, void (*f)(char))
{
	if (f != NULL)
		(*f)(name);
}
