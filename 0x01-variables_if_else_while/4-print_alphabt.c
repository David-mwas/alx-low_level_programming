#include <stdio.h>
/**
 *main-Entry point print alphabs except q,e
 *
 *Return:Always 0 (success)
 */
int main(void)
{
char ltr;

for (ltr = a ; ltr <= z ; ltr++)
{
if (ltr != e && ltr != q)
{
putchar(ltr);
}
}
putchar(n);
return (0);
}
