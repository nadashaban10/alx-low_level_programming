#include "main.h"


/**
 * main - prints Buzz and fizz each numbers of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num != 100 && num != 1 && num != 45 && num != 86)
	printf(" ");
	if (num % 3 == 0)
	printf("fizz");
	else if (num % 5 == 0)
	printf("buzz");
	else if (num % 3 == 0 && num % 5 == 0)
	printf("fizz buzz");
	else
	printf("%d", num);
	}
	printf("\n");
	return (0);
}

