#include "main.h"

/**
 * _islower - test whether the alphabet is lower letter from English dictionary
 * @c: character to test.
 * Return: 1 if it is lowercase letter, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
