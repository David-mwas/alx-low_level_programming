#include "main.h"
#include "unistd.h"
/**
 *print_rev - prints a string in reverse
 *@s: The string to be printed
 */
void print_rev(char *s)
{
int len = 0, i;
while (s[i++])
{
len++;
}
for (i = len - 1 ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');

}
