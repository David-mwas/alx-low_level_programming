#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-Entry point prints a random num
 *states if its +ve,-ve or 0
 *Return:Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
