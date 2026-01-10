#include<stdio.h>
int main()
{
    int a,b,i,power=1;
    printf("Enter a number and power to be calculated:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        power *= a;
    }
    printf("a^b = %d",power);
}