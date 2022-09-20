
#include "main.h"
#include "stdio.h"
/**
 *print_array - reverse q string
 *@a: buffer tocopy string to
 *@n: the source string tocopy
 *
 *Return: a pointer to destination
 */
void print_array(int *a, int n)
{
int index;
for (index = 0 ; index < n ; index++)
{
printf("%d", a[index]);
if (index == n - 1)
{
continue;
}
printf(", ");
}
printf("\n");
}
