#include "main.h"


/**

nLength - checks the length of the number.
@n: The number to check
*
Return: digits number
*/

int print_last_digit(int n)
{
	int last = n % 10;
	if (n > 0)
	_putchar(last + '0');
	else 
		_putchar -1 * (n % 10)
			return (last);
}
