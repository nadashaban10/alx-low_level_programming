#include <stdio.h>


/**
 *main - Entry point
 *
 *description: print numbers
 *
 *return: always 0 (success)
 */

int main(void)
{
        int x = 0;
        
        while (x < 10)
        {
                printf("%d" ,x);
                x++;
        }
	putchar('\n');
                return (0);
        }
