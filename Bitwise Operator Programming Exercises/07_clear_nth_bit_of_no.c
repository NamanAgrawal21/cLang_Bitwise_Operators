// To clear or unset the nth bit of a given number as 0.

#include <stdio.h>
void main()
{
    int num,n,a;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the nth bit to unset:");
    scanf("%d",&n);
    a = 1<<n ^ num;
    printf("Number after clearing %dth bit is %d.",n,a);    
}