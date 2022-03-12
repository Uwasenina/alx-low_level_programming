#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
