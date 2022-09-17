#include <stdio.h>
/*
 * *
 *largest_number - returns largest number
 *
 *@a:1st param
 *@b:2nd param
 *@c:3rd param
 *@int:retuns intege
 r
 *Return : 0 (success)
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
