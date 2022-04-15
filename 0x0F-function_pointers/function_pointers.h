#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stddef.h>

/* print to characters */
int _putchar(char c);
/* function to print a name */
void print_name(char *name, void (*f)(char *));

/* function that executes a function given as a parameter on each element*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));

#endif
