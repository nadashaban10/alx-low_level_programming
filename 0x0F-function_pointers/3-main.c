#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (Success)
 */

/*we allow to use only main function*/
int main(int argc, char *argv[])
{
	/*then decleration some vars*/
	int arg1;
	int arg2;
	int result;
	char x;
	int (*func)(int, int);

	/*first con if more than 4 element!,name file is elment1 huh*/
	if (argc != 4)
	{
		printf("Error\n");
	}

	arg1 = atoi(argv[1]); /*first num*/
	arg2 = atoi(argv[3]); /*senc num*/
	x = *argv[2];
	func = get_op_func(argv[2]); /*operator*/
	/*cond required*/
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	/*condition*/
	if ((x == '/' || x == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/*final and correct result*/
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
