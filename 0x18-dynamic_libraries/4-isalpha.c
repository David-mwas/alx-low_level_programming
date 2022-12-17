#include "main.h"

/**
 * _isalpha - function to check if c is a letter, uppercase or lowercase
 * @c: is the int that will use for the argument of the function
 * Return: returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
