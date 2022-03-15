#include "main.h"

/**
 * _isalpha - tests whether a character is from english alpabet
 * @c: ASCII character to be checked.
 * Return: 1 if a character is an english alphabet, else 0
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c >= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
