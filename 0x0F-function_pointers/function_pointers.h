#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
#define <stdio.h>

/* print to characters */
int _putchar(int char);
/* function to print a name */
void print_name(char *name, void (*f)(char *));

/* functio that executes a function given as a parameter on each element of am arrya*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* function that searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));

#endif
