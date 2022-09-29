#include "main.h"

/**
 * factorial - prints factorial of any number.
 * @n: contains a integer number.
 * Return: factorial value of a integer number.
 */

int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
