#include "main.h"
#include "unistd.h"
/**
 *_strlen - Return the length of a string
 *@str: The string to get the 1 of
 *
 *Return: The length of @str
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
{
length++;
}
return (length);
}
