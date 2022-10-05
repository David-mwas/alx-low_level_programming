
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function to create a array an initialize with a char.
* @size: size of the array.
* @c: Initialize char for the array.
*
* Return: pointer to the array. NULL is size is 0 or fails.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(sizeof(char) * size);

if (size == 0 || ptr == NULL)
{
return ('\0');
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
return ('\0');
}
