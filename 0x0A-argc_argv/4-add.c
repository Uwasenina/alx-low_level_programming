#include "main.h"
#include <stdio.h>
#include <stlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a number contains symbols, otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		        printf("%d\n", sum);
	}
	else
	printf("0\n");
	return (0);
}
