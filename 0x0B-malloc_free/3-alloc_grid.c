#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - function that returns a pointer to a 2 dim
 *@width: input width of array
 *@height: input h of array
 *Return: grid or null
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	/*first codition*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*creat a memory allocate using height with index */
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	/*memory allocat for width using index  */
	grid[i] = (int *)malloc(width * sizeof(int));
	/*more specify con for null*/
	if (grid[i] == NULL)
	{
	/*start from last index and dicrease and free it*/
	for (; i >= 0; i--)
	{
	free(grid[i]);
	}
	free(grid);
		return (NULL);
	/*start to looping into h,w and intialized by 0 */
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}
	return (grid);
	}
