#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that multiplies two numbers
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: Result of multiplication or 1 when does not receive two arguments.
*/
int main(int argc, char *argv[])
{
int i;
int result = 1;

if (argc < 3 || argc >= 4)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{

result *= atoi(argv[i]);
}

printf("%d\n", result);
}
return (0);
}
