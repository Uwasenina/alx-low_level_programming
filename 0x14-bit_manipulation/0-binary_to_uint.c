#include "main.h"

/**
 * _strlen_b - Returns length of a string
 * @s: pointer to a string
 * Return: the length of string
 */
unsigned int _strlen_b(const char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) != '0' && *(s + i) != '1')
			return (0);
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointiong to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow;
	unsigned int n = 0;
	unsigned int l = 0;

	if (b)
		l = _strlen_b(b);
	for (pow = 0; l--, pow++)
	{
		if (*(b + l + 1) == '1')
			n += 1 << pow;
	}
	return (n);
}
