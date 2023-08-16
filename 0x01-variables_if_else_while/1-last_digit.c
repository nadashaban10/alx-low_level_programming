#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * 
 * main - entry point to start 
 * description: assing the last digit by 3 conditions
 * return : 0 (success)
*/

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	if (digit > 5)
	{
	    printf("Last digit of %d is %d and is greater than 5\n" ,n ,digit) ;
	}
	if (digit < 6)
	{ 
	    printf("Last digit of %d is %d and is less than 6 and not 0\n" ,n ,digit) ;
	}
	else 
	{
	    printf("Last digit of %d is 0 and is 0\n" ,n ,digit) ;
	}
		return (0);
}
