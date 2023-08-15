#include <stdio.h>


/**
 * main -Entry point 
 *description: positive or negative num
 *return: 0 (success)
 */

int main(void)
{
        int n ;
        if (n > 0)
       	{
                printf("%d is positive\n" , n) ;
        }
        else if (n < 0)
       	{
                printf("%d is negative\n" , n) ;
        }
        else 
	{
                printf("%d is zero\n" , n) ;
        }
	return (0);
}
