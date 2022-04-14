#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints a numbers
 * @separator: argument among numbers
 * @n: numbers of parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
		if (separator != 0 && i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);
	va_end(args);
}
