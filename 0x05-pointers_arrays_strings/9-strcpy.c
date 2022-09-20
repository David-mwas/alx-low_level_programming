#include "main.h"
#include "unistd.h"
/**
 *_strcpy - reverse q string
 *@dest: buffer tocopy string to
 *@src: the source string tocopy
 *
 *Return: a pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
