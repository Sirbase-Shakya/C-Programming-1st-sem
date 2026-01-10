#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter 2 Numbers:");
    scanf("%d %d",&m,&n);
    int sum,prod,diff,quo;
    sum = m+n;
    diff = m - n ;
    prod = m*n;
    quo = m/n;
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d ",sum,diff,prod,quo);
}