#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of argument passed
 * @argv: Name of array
 * Retur: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atio(argv[1]);
	b = atio(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n",c);
	return (0);
}
