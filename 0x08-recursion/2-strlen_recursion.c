#include "main.h"

/**
 * _strlen_recursion - prints length of any string.
 * @s: Contains a string to reverse
 * Return: length of String.
 */

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}

return (0);
}
