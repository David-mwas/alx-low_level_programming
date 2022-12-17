#include "main.h"

/**
 * _puts - Prints a string.
 * @s: Variable string.
 *
 * Return: Always void.
 */
void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}
