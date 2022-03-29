#include "main.h"

/**
 * _strstr - locate a string
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (neddle[x + 1] == '\0')
					return (haystack);

				x++;
			} while (haystack[x] == neddle[x]);
		}
		haystack++;
	}
	return ('\0');
}
