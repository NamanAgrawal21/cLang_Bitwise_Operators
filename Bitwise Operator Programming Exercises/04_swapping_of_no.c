#include <stdio.h>
void main()

{
    int a,b;
    printf("Enter the first no:");                      // Swapping without using third variable and using bitwise operator
    scanf("%d",&a);
    printf("Enter the second no:");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("First no. after swapping is %d",a);
    printf("\nSecond no. after swapping is %d",b);

}