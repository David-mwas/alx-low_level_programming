#include <unistd.h>
/**
 *_putchar-writes cahar
 *c:char to print
 *Return :0 success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
