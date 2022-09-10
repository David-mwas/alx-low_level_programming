#include <stdio.h>

/**
 *main-entry point
 *
 *Return:Always 0 (success)
 */
int main(void)
{
     int A;
 long int B;
 long long int C;
 char D;
 float F;
 
 printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(D));
     printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));
     printf("size of  long int: %lu byte(s)\n", (unsigned long)sizeof(B));
     printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(C));
     printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(F));

 return (0);
}
