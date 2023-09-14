#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers- funtion prints number
 *@separator: string between
 *@n: numbers print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	va_list args; /*variable type va_list*/
	unsigned int i;

	va_start(args, n); /*lets store all n in args*/

	for (i = 0; i < n; i++) /*iterating on n to get all n*/

	{
		num = va_arg(args, int); /*ths num to store all args and print it*/

		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
