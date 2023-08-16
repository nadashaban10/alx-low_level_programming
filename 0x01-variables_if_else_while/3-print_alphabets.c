#include <stdio.h>

/**
 *main - Entry point
 *
 *description: print all alphabet letters
 *
 *return: always 0 (success)
 */

int main(void)
{
        char ch = 'a';
        char chr = 'A';

        while (ch <= 'z')
        {
                putchar('\n');
                ch++;
        }
        while (chr <='Z')
        {
            putchar('\n');
            chr++;
        }
                return (0);
        }
