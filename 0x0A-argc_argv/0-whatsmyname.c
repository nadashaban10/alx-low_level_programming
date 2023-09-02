#include <stdio.h>
/**
*main - program that prints its name, followed by a new line.
*@argv: array string
*@argc: count element
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
