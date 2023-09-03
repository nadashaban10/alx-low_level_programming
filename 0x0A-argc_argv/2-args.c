#include <stdio.h>
/**
 *main - program that prints the number of arguments passed into it.
 *@argv: array
 *@argc: count of element
 *Return: 0
 */
#include <stdio.h>

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
