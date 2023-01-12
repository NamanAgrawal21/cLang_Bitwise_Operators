// To check the LSB of a number is set or not.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");            // Least Significant Bit (LSB) of the no. is set if it is '1' and if it is '0' then unset
    scanf("%d",&n);
    if(n & 1 == 1)
       printf("LSB of the %d is set (1).",n);
    else
       printf("LSB of the %d is unset (0).",n);
}