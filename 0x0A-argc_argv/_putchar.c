#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_putchar - writes to stdout
 *@c: char to print
 *Return: success 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
