#include "main.h"
#include "unistd.h"
/**
 *rev_string - reverse q string
 *@s: The string to be reversed
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char tmp;
while (s[index++])
{
len++;
}
for (index = len - 1 ; index >= len / 2 ; index--)
{
tmp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
}
