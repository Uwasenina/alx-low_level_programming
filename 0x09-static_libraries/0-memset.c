#include "main.h"
/**
 * _memset - fills memory with constant
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
