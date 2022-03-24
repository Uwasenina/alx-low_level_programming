#include "main.h"

/**
 * _strncat - concatenate two string
 * @dest: destination value
 * @src: source value
 * @n: the limit of concatenation
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
