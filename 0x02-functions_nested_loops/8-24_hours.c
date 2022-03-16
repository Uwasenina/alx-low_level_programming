#include "main.h"

/**
 * jack_bauer - print time table in this format HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if ((a <= 49 && b <= 57) || (a <= 50 && b <= 51))
			{
				for (c = 48; c <= 53; c++)
				{
					for (d = 48; d <= 57; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
					}
				}
			}
		}
	}
}
