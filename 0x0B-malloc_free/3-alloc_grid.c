#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Function returns a pointer to a 2-D array of integers.
* @width: width of the array.
* @height: height of the array.
*
* Return: pointer to the array. NULL is size is 0 or fails.
*/
int **alloc_grid(int width, int height)
{
int i, j, k;
int **ptr;

if (width <= 0 || height <= 0)
return (NULL);
ptr = malloc(sizeof(int *) * height);
if (ptr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = malloc(sizeof(int) * width);
if (ptr[i] == NULL)
{
for (k = 0; k < i; k++)
free(ptr[k]);
free(ptr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
*(ptr[i] + j) = 0;
}
return (ptr);
}
