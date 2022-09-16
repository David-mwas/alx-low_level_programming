
#include "main.h"
#include <stdio.h>
/**
 *print_to_98-Entry point
 *description-prints numbers upto 98
 *@n:integer parameter "int n"
 *int n-parameter
 *Return:always 0 success
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
