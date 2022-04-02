#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple of two numbers
 * @argc: Number of command line argument
 * @argv: Array name
 * Return: 1 if it is not enough argument, otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}
	return (0);
}
