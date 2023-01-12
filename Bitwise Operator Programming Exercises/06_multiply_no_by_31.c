// To multiply a number by 31 without using multiplication operator

#include <stdio.h>
void main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=(n << 5) - n;
    printf("The product of %d and 31 is %d",n,a);
}