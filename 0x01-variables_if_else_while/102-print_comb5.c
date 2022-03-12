#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 99; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 100; digit2++)
		{
			putchar(digit1);
			putchar(digit1);
			putchar(' ');
			putchar(digit2);
			putchar(digit2);
			if (digit1 == 98 && digit2 == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
