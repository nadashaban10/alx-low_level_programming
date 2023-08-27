#include <stdio.h>


/**
 *main - Entry point
 *description: a program that prints all single digit numbers
 *Return: always 0 (success)
 */

int main(void)
{
	int x = 0;

		while (x < 10)
		{
			printf("%d", x);
			x++;
		}
	putchar('\n');
	return (0);
}
