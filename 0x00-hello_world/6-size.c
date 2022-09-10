#include <stdio.h>

/**
 *main-print puts func string
 *
 *Description:use func main
 *this program prints "programming is like building a multilingual puzzle
 *Return:0
 */
int main(void)
{
int A;
long int B;
long long int C;
char D;
float F;

printf("size of int:%lu byte(s)\n", (unsigned long)sizeof(A));                 
printf("size of long int:%lu byte(s)\n", (unsigned long)sizeof(B));
printf("size of long long int:%lu byte(s)\n", (unsigned long)sizeof(C));
printf("size of char:%lu byte(s)\n", (unsigned long)sizeof(D));
printf("size of float:%lu byte(s)\n", (unsigned long)sizeof(F));

return (0);
}
