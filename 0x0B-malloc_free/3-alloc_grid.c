#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - function to return ptr to 2D array
  *@width: width of the array
  *@height: height of array
  *Return: NULL (failure or when either height/width is 0 or -ve)
  */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	int l = width * height;

	if (l <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
