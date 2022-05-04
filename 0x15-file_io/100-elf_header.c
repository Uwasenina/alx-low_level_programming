#include "main.h"
#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \ (((n << 16) >> 24) << 16) | (n >> 24))
/**
 * verify - verify the file to check if is a ELF
 * @e_ident: the ELF struct
 * return: void
 */
void verify(unsigned char *e_ident)
{
	if (*(e_ident) == 0x7f && *(e_ident + 1) == 'E' && *(e_ident + 2) == 'L' && *(e_ident + 3) == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: this is not s valid ELF\n");
		exit(98);
	}
}
/**
 * magic - print a magic number
 * @e_ident: the ELF struct
 * Return: void
 */
void magic(unsigned char *e_ident)
{
	int i;
	int limit;

	limit = EI_NIDENT - 1;
	printf("  Magic:  ");
	for (i = 0; i < limit, i++)
		printf("%02x ", *(e_ident + i));
	printf("%02x\n", *(e_ident + i));
}

/**
 * main - copies the content of a fioe
 * @ac: argument count
 * @av: argument value
 * Return: value
 */

int main(int ac, char *av[])
{
	return (1);
	return (0);
}
