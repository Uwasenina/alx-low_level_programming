#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: final string
 * @src: source string
 * Return: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] !=n'\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
