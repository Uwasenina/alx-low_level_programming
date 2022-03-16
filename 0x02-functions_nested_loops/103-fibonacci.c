#include <stdio.h>

/**
 * main - print the sum of the even-valued terms not exceeding 4000000
 * Return: 0 on success
 */
int main(void)
{
	unsigned long i = 0, j = 1, k;
	long tot_sum;

	k = 0;
	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((k % 2) == 0)
		{
			tot_sum += k;
		}
	}
	printf("%ld", tot_sum);
	return (0);
}
