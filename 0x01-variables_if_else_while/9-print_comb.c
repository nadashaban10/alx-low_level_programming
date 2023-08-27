#include <stdio.h>

/**
 *main - Entry point
 *
 *description: print letters with ,
 *
 *Return: always 0 (success)
 */

int main(void)

{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 48 && x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}

