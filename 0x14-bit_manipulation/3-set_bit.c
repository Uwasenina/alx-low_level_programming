#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * @n: pointer bit to be evaluated
 * @index: the index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
