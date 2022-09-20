 
#include "main.h"
#include "unistd.h"
/**
 *print_rev - prints a string in reverse
 *@s: The string to be printed
 */
void print_rev(char *s)
{
int len = 0, index;
while (s[index++])
{
len++;
}
for (index = len - 1 ; index >= 0 ; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
