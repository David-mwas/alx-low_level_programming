#include "main.h"

/**
 * _strcmp - function that compare strings.
 * @s1: array 1.
 * @s2: array 2.
 *
 * Return: Array of characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
		{
			return (dif);
		}
		else
		{
			continue;
		}
	}
	return (dif);
}
