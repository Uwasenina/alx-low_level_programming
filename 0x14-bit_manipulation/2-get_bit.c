#include "main.h"

/**
 * get_bit - returs the value of a bit at agiven index
 * @index: the index starting from 0 of the bit you want to grt
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
