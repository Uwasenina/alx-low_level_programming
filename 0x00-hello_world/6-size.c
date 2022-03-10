#include <stdio.h>

/**
 * main - size of datatype
 *
 *Return: 0 if it exited, otherwise non-zero
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of long int: %lu byte(s)\n", sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
