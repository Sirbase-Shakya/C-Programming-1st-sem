#include<stdio.h>
int main()
{
    
    int a,b,temp;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    printf("Before Swap A=%d B=%d",a,b);
    temp =a;
    a=b;
    b=temp;
    printf("\nAfter Swap A=%d B=%d",a,b);
}