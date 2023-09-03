#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that adds positive numbers.
*@argv: input array
*@argc: count of elements
*Return: (0) or (1)
*/
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum;
	int j;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
		/*3shan argc bd2a mn 1 already fa lazm tkon akbr mn 1, msh 3yz asmo*/
	{
		/*Check if each argument is a positive integer*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				/*Argument contains non-digit characters hrf y3ne*/
				printf("Error\n");
				return (1);
		}
		}
		/* lma nwsl hna y3ne khlas mfhish ay char w hy3ml sum*/
		/*lazm a3ml convert 3shan argv dh array str*/
		/*Convert the argument to an integer and add it to the sum*/
		num = atoi(argv[i]);
		if (num < 0)
		{
			/*Negative number, ignore it*/
			continue;
		}
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
