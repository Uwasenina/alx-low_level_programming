#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase.
 * Return: Nothing
 */
void print_alphabet(void) /*function definition. */
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
