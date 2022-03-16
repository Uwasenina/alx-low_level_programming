#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers.
 * Return: 0 on success.
 */
int main(void)
{
	int i, j, n, k;

	i = 0;
	j = 1;
	for (n = 0; n < 50; n++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d", k);
		if (n == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
		return (0);
}
