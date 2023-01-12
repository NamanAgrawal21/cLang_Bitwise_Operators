// To check the MSB of a number is set or not.

#include <stdio.h>
void main()
{
    int n,bits,a;
    printf("Enter the number:");
    scanf("%d",&n);
    bits = sizeof(n) * 8;
    a = 1 << (bits-1);
    if(n&a==0)
        printf("MSB of %d is unset (0).",n);
    else
        printf("MSB of %d is set (1).",n);
}