#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* cop_add - adds a and b
* @a: first number
* @b: second number
*
* Return: sum of a and b
*/
int cop_add(int a, int b)
{
	return (a + b);
}
/**
 * cop_sub - subtracts the ints
 * @a: first int
 * @b: second int
 * Return: difference
 */
int cop_sub(int a, int b)
{
	return (a - b);
}
/**
 * cop_mul - multiplies the ints
 * @a: first int
 * @b: second int
 * Return: product
 */
int cop_mul(int a, int b)
{
	return (a * b);
}
/**
 * cop_div - divides the ints
 * @a: first int
 * @b: second int
 * Return: result
 */
int cop_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * cop_mod - remainder of division of ints
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int cop_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
