#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 * Return: Nothing
 */
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
