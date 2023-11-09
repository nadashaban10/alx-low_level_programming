#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
	
	char *str;
	va_list args;
	char *sepr;
	va_start(args, format);

	while (format && *format)
	{
		if (*format == 'c')
		{
			printf("%s%c", sepr, va_arg(args, int));
		}
		else if (*format == 'i')
		{
			printf("%s%d", sepr, va_arg(args, int));
		}
		else if (*format == 'f')
		{
			printf("%s%f", sepr, va_arg(args, double));
		}
		else if (*format == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", sepr);
			}
			else
			{
				printf("%s%s", sepr, str);
			}
		}

		sepr = ", ";
		format++;
	}
}
