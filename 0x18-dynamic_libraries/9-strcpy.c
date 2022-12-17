#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src.
 * @dest: array name.
 * @src: elements of the array.
 *
 * Return: Always void.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	_putchar('\n');
}
