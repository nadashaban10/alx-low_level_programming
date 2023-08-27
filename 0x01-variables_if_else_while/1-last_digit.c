#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/** 
 *main - entry point
 *description: program will assign a random number to the variable n
 *Return: 0 (success)
 */

int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{ 
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else 
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	return (0);
}
