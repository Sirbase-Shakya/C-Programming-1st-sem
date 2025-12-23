#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
    {
        printf("freebuzz");
    }
    else if(n%3==0)
    {
        printf("free");
    }
    else if(n%5==0)
    {
        printf("buzz");
    }
    else 
    {
        printf("invalid");
    }
}