#include <stdio.h>

/**
* main - Program that prints its name, followed by a new line.
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (*(argv[0] + i) != '\0')
	{
		putchar(*(argv[0] + i));
		i++;
	}
	putchar('\n');
	return (0);
}

