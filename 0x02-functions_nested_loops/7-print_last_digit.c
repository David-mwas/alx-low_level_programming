
#include "main.h"
/**
 *print_last_digit(int n);
 *"print_last_digit":checks for lowerc characters
 *"n"-is the number printed last
 *Return:0 (success)
 */
int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
