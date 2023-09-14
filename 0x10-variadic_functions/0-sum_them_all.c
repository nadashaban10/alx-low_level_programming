#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum numbers
 *@n: numbers
 *Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int num;
	/*data type , this var to store n in it*/
	va_list all;
	/*1th condition*/
	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	/*start with n to be in all*/
	va_start(all, n);
	/*loop to get all numbers and stored in var num*/
	for (i = 0; i < n; i++)
	{
		num = va_arg(all, int);
		sum = sum + num;
	}

	/*ending of va*/
	va_end(all);
	return (sum);
}
