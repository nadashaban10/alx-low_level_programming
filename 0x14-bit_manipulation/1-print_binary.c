#include "main.h"
/**
 *print_binary - print binary type
 *@n: number given
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/*'1' is the value returned if (n & 1) is true (i.e., if the LSB is 1).*/
	/*':' is used to separate the true and false expressions in the ternary */
	/*'0' is the value returned if (n & 1) is false (i.e., if the LSB is 0)*/
	/*? is the conditional operator, which acts as a ternary decision point*/
	putchar((n & 1) ? '1' : '0');

	/**
	 *if n is 5 (binary 101), it will print '1' for the first bit
	 *'0' for the second bit
	 *and '1' for the third bit
	 *resulting in the output "101."
	 */
}
