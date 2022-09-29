
#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - return pow any number.
 * @x:contains a number.
 * @y:contains a pow
 * Return: pow of a number.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0 || x == 1 || x == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
