#include <stdio.h>

/**
 * main -entry point
 * description:prints all possible different combinations of two digits.
 * Return: (0) always success
 */

int main(void)
{

	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
	putchar(i + '0');

	putchar(',');
	putchar(' ');
	putchar(j + '0');
	}
	}
	putchar('\n');
	return (0);
}
