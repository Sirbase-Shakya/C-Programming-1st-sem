#include<stdio.h>
int main()
{
    int n,count = 0,sum = 0,temp;
    float avg;
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
        sum += n%10;
        n /=10;
    }
    avg = (float)sum/count;
    printf("Average = %f",avg);

}