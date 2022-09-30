#include <stdio.h>

/**
* main - Program that prints the numbers of arguments.
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: 0.
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
