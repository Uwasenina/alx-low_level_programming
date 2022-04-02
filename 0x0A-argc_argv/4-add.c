#include "main.h"
#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a number contains symbols, otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, j, l, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			l = strlen(ptr);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum;
				}
				return (0);
				}
