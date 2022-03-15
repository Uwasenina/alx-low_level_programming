#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: digit to find thr last digit of it.
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
		_putchar((n % 10) + '0');
		return (n % 10);
}

