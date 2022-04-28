#include "main.h"

/**
 * clear_bit - sats a value of bit to 0
 * @n: pointer to number being manipulated
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, -1 if ana error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
