#include "main.h"

/**
 * print_binary - prints te binary representation of a number
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int k;
	int pront_no = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			_putchar('1');
			print_no = 1;
		}
		else if (!(k & 1) && print_no)
			_putchar('0');
	}
}
