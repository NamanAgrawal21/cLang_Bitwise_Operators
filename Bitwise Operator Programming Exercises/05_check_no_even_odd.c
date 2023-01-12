#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    if(n & 1)
       printf("Entered no. is ODD.");
    else
       printf("Entered no. is EVEN.");
       return 0;
}