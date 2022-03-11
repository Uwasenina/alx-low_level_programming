#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assigns a random number to int n everytime
 * Description: tell if a number is positive,negative or zero
 * Return: 0 if it exited, otherwise non-zero
 */
int main(void)
{
	int n;

	srand(time(0));

	n =  rand() - RAND_MAX / 2;

	if (n > 0) /* checking whether it is positive*/
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0) /*check whether it is negative*/
	{
		printf("%d is negative\n", n);
	}
	else /* otherwise it is zero*/
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
