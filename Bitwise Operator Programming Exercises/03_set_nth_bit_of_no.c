// To set the nth bit of a given number as 1.

#include <stdio.h>
void main()
{
    int num,n,a;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the nth bit to set:");
    scanf("%d",&n);
    a = 1<<n | num;
    printf("Number after setting %dth bit is %d.",n,a);    
}