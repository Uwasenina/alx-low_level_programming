#include<stdio.h>

/**
 * main - size of datatype
 *
 *Return: 0 if it exited, otherwise non-zero
 */
int main(void)
{

	printf("Size of a char: %l byte(s)\n", sizeof(char));
	printf("Size of an int: %l byte(s)\n", sizeof(int));
	printf("Size of long int: %l byte(s)\n"sizeof(long int));
	printf("Size of long long int: %l byte(s)\n", sizeof(long long int));
	printf("Size of float: %l byte(s)\n", sizeof(float));
	return (0);
}
