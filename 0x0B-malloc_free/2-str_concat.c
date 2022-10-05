
#include "main.h"
#include <stdlib.h>

/**
* str_concat - Function that concatenates two strings
* @s1: string 1.
* @s2: string 2.
*
* Return: pointer to the array. NULL is size is 0 or fails.
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int k;
unsigned int len1 = 0;
unsigned int len2 = 0;
char *ptr;

if (s1 == NULL)
s1 = ("");
if (s2 == NULL)
s2 = ("");
while (s1[i] != 0)
i++;
len1 = i + 1;
while (s2[j] != 0)
j++;
len2 = j + 1;
ptr = malloc(sizeof(char) * (len1 + len2 - 1));
if (ptr != NULL)
{
for (k = 0; k <= (len1 - 1); k++)
{
ptr[k] = s1[k];
}
for (k = 0; k <= (len2 - 1); k++)
{
ptr[(len1 - 1) + k] = s2[k];
}
}
else
return ('\0');
return (ptr);
}
