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

	printf("Enter a number to be checked\n");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
