#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *free_grid- function to free a 2D array in 3-alloc_grid.c
  *@grid: the 2D array
  *@height: height of array
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
