#include "main.h"

/**
 * times_table - print n times
 * @n: the multiplication table requested.
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, k, a, b, c;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				a = k / 10;
				b = k % 10;
				c = k / 100;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (k < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(b + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar(a + '0');
					_putchar(b + '0');
				}
				else if (k >= 100 && j != 0)
				{
					_putchar(c + '0');
					_putchar(a + '0');
					_putchar(b + '0');
				}
				els
					_putchar(b + '0');
			}
			_putchar('\n');
		}
	}
}

