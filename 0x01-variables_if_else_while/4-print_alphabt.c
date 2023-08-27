#include <stdio.h>
#include <time.h>
/**
 *main - entry point
 *description:  a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
	if ( i == 113 && i == 101)
	putchar(i);
	}
	putchar('\n');
	return (0);
}
