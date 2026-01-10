#include<stdio.h>
int main()
{
    int n,i = 1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i*i < n)
    {
        i++;
    }
    if (i*i == n)
    {
        printf("%d is a perfect square.",n);
    }
    else{
        printf("%d is not a perfect square.",n);
    }
       
}