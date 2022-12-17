
#include "main.h"

/**
  *_strspn- gets the length of a prefix substring
  *@s: pointer to a string
  *@accept: prefix substring
  *Return: length of a prefix substring
  */

unsigned int _strspn(char *s, char *accept);

unsigned int _strspn(char *s, char *accept)
{
	char *ptr = accept;
	int check = 0;
	int seen = 0;
	unsigned int i = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				check++;
				seen = 1;
			}
			accept++;
		}
		if (check != 0)
		{
			i += check;
		}
		else if (seen == 1)
			break;
		accept = ptr;
		s++;
		check = 0;
	}
	return (i);
}
