#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @p: the string will be modified
 * Return: value
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p);
}
