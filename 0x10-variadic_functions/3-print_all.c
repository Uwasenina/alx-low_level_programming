#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print a char
 * @c: char to print
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_i - print int
 * @i: int to print
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - print a float
 * @f: float to print
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - print anything
 * @format: mlist of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list args;
	char *separator = "";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
	while (p[j].t != NULL)
	{
		if (*p[j].t == format[i])
		{
			printf("%s", separator);
			p[j].f(args);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;
	}
	va_end(args);
	printf("\n");
}
