#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
        char *sec;
	unsigned int a , len = 0;
	char c;
        va_list list;

        va_start(list, format);

        for (a = 0 ; format[a] != '\0' ; a++)
        {
                if (format[a] == 'c')
                {
                       c = va_arg(list, int);
                        a++;
                }


                else if (format[a] == 's')
                {
		sec = va_arg(list, char *);
		_putchar(sec ,stdout);
		a = a + strlen(sec);
                }

                else if (format[a]  == '%')
                {
                       _putchar('%');
                        a++;
                }
	format ++;
}

va_end(list);
_putchar ('\n');
return (a);
}
