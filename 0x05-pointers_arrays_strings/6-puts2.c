
#include "main.h"
#include "unistd.h"
/**
 *puts2 - reverse q string
 *@str: The string to be reversed
 */
void puts2(char *str)
{
int len = 0, index = 0;
char tmp;
while (str[index++])
{
len++;
}
for (index = 0 ; index < len ; index += 2)
{
_putchar(str[index]);
_putchar('\n');
}
}
