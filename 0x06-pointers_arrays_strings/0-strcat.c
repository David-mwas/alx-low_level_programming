#include "main.h"
#include <stdio.h>
/**
 *strcat - reverse q string
 *@dest: buffer tocopy string to
 *@src: the source string tocopy
 *
 *Return: a pointer to destination
 */
char *strcat(char *dest, const char *src)
{
int i = 0, dest_len = 0;
while (dest[i++])
{
dest_len++;
}
for (i = 0 ; src[i] ; i++)
{
dest[dest_len++] = src[i];
}
return (dest);
}
