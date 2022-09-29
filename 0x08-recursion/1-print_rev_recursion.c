#include "main.h"

/**
 * _print_rev_recursion - prints any string in reverse.
 * @s: Contains a string to reverse
 * Return: Void variable.
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
