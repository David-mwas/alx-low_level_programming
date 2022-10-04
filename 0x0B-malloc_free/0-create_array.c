

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
main.h unsigned int i;
main.h char *ptr;

main.h ptr = malloc(sizeof(char) * size);

main.h if (size == 0 || ptr == NULL)
main.h {
main.h main.h return ('\0');
main.h }
main.h else
main.h {
main.h main.h for (i = 0; i < size; i++)
main.h main.h {
main.h main.h main.h ptr[i] = c;
main.h }
main.h return (ptr);
main.h }
main.h return ('\0');
}
