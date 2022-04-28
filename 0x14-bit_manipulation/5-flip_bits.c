#include "main.h"

/**
 * flip_bits - returns of bits you would need to
 * flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			i++;
		n = n >> i;
	}
	return (i);
}
