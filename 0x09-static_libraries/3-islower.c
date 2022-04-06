#include "main.h"

/**
 * _islower - this checks for lowercas letters
 * @c: character
 * Return: i if it is lowercase, else 0
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
