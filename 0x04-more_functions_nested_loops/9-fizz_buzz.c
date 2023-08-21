#include "main.h"


/**
*main - print numbers from 0 to 100 followed by new line
*num: variable for loop
*return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	printf(" ");
	if (num % 3 == 0)
	printf("fizz");
	else if (num % 5 == 0)
	printf("buzz");
	else if (num % 3 == 0 && num % 5 == 0)
	printf("fizzbuzz");
	else 
		printf("%d" ,num);
	}
	printf("\n");
	return (0);
}

