#include "main.h"
#include <stdio.h>

/**
 * root_square - Returns the natural square root of a number
 * otherwise return 0.
 *
 * @n: result to find.
 * @num: number multiply by itself give the result.
 * Return: root square of the number
 *
 */
int root_square(int num, int n)
{
/*Base case*/
if (num * num == n)
{
return (num);
}
else if (num * num > n)
{
return (-1);
}
else
{
num++;
}
return (root_square(num, n));
}

/**
 * _sqrt_recursion - Function that give natural square root of a number
 *
 * @n: number to find root square.
 * Return: natural square root of a number.
 *
 */
int _sqrt_recursion(int n)
{
/* base case */
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
else
{
return (root_square(2, n));
}
}
