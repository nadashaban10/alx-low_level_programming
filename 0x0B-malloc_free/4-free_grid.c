#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*free_grid - function thats free the prevuise frid
*@grid: prevoise grid
*@height: height og array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
