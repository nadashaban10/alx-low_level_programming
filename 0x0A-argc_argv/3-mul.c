#include <stdlib.h>
#include <stdio.h>
/**
 *main - program that multiplies two numbers.
 *@argv: array
 *@argc: count of element
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int sum;

	if (argc == 3)
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
