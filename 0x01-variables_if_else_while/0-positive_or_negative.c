#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - To check if a number is negative or positive
 *
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
	else if (n == 0) /*check whether it is zero*/
	{
		printf("%d is zero\n", n);
	}
	else /* otherwise it is negstive*/
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
