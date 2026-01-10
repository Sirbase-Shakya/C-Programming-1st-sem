#include<stdio.h>
int main()
{
    int n,sum = 0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if(n == sum)
    {
        printf("%d is a pefect number.",n);
    }
    else
    {
        printf("%d is a not a pefect number.",n);
    }

}