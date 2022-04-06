#include "main.h"

/**
 * _strlen - print the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
