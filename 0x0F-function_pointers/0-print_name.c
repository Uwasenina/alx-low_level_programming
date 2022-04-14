#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: char
 * @f: function to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
