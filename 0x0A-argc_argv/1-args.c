#include <stdio.h>
/**
*main - program that prints the number of arguments passed into it.
*@argv: array
*@argc: count of element
*Return: 0
*/
int main(int argc, char **argv __attribute__ ((unused)))
{


	printf("%d\n", argc - 1);

	return (0);
}
