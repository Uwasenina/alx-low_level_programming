#include "main.h"

/**
 * cap_string - ....
 * @s: ....
 * Return: value
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		j = 0;

		while (j < csps)
		{
			if ((i == 0 || s[i - 1] == spc[j]) && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] -= 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}

