#include "main.h"

/**
 * times_table - print 9 times table starting from 0
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, k, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			a = k / 10;
			b = k % 10;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (k >= 10)
			{
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else if (k < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(b + '0');
			}
			else
			{
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
