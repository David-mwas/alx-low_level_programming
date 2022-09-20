#include "main.h"
#include "unistd.h"
/**
 *swap_int - swaps the vars of 2 ints
 *@a: The 1st int to be swapped
 *@b: The 2nd int to be swapped
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
