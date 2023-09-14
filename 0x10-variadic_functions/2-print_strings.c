#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: sptr between str
 *@n: number of str
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args; /*var list to store type of v*/

	va_start(args, n); /*start point storing*/

	for (i = 0; i < n; i++)  /*to iterate all elemnt str*/
	{

		str = va_arg(args, const char *);
		/*codition required*/
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{ /*str printed */
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

