#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 dimensional grid previously created
* @grid: Pointer to array 2-D.
* @height: height of the array 2-D.
*
* Return: always void.
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
