#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: the first string
 * @s2: the second string
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, r = 0, lim;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		lim = i;
	}
	else
	{
		lim = j;
	}
	while (k <= lim)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			r = s1[k] - s2[k];
			break;
		}
		k++;
	}
	return (r);
}
