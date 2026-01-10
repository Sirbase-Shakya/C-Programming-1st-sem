#include<stdio.h>
int main()
{
    int n,sum = 0,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j/2;i++)
        {   
            if(j%i == 0)
            {
                sum += i;
            }
        }
        if(j == sum)
        {
            printf("%d ",j);
        }
        sum = 0;
    }
    
}