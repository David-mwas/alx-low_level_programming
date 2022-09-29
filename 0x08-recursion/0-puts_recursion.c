#include "main.h"

/**
 * _puts_recursion - prints any String.
 * @s: Contains a String.
 * Return: Void Variable.
 */

void _puts_recursion(char *s)
{
if (*s != 0)
{
_putchar(*s);
_puts_recursion(s + 1);
return;
}
_putchar('n');
}
