#include "main.h"


/**
*main - print numbers from 0 to 100 followed by new line
*when number of multiplies 3 is zero ,will print "fizz"
*when number of multiplies 5 is zero , will print "buzz"
* when both ( 5 and 3 ) is zero , will print "fizz buzz"
*return: 0 always  (success)
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
	printf("%d", num);
	}
	printf("\n");
	return (0);
}

