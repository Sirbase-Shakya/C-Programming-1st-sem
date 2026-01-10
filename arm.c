#include<stdio.h>
#include<math.h>
void main()
{
    int n,count = 0,arm = 0,temp;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        count++;
        n/=10;
    }
    n = temp;
    while(n>0)
    {
        arm += round(pow(n%10, count));
        n/=10;
    }
    if(arm == temp)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}
