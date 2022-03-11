#include <stdio.h>

/**
 * main - print all possible combination ofsingle-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
		continue;

		putchar(',');
		putchar(' ');
	}
	return (0);
}
