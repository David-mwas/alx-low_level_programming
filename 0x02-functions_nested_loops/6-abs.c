#include "main.h"
#include <stdio.h>
/**
 *_abs:checks returns absolute value of an integer number c
 *
 *Return:0 (success)
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}
