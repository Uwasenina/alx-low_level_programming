#include "main.h"

/**
 * rev_string - print reversed string
 * @s: validate the character
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, a = 0, x;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		x = s[i];
		s[i--] = s[a];
		s[a++] = x;
	}
}
