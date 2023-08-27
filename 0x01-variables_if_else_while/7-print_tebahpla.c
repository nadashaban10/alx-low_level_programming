#include <stdio.h>


/**
 *main - Entry point
 *
 *description: priint alphabet letters
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;

	}
	putchar('\n');
	return (0);
}
