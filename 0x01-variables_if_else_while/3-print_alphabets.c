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
                putchar(ch);
                ch++;
        }
        while (chr <='Z')
        {
            putchar(chr);
            chr++;
        }
                return (0);
        }
