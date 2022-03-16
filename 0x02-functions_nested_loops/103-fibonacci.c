#include <stdio.h>

/**
 * main - print the sum of the even-valued terms not exceeding 4000000
 * Return: 0 on success
 */
int main(void)
{
	unsigned long i = 0, j = 1, k;
	long tot_sum = 0;

	while (1)
	{
		k = i + j;
		if (k > 4000000)
		{
			break;
		}
		if ((k % 2) == 0)
		{
			tot_sum = tot_sum + k;
		}
		i = j;
		j = k;
	}
	printf("%ld", tot_sum);
	return (0);
}
