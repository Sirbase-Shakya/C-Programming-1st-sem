#include <stdio.h>
#include<math.h>
int main() {
    int x,temp,c=0,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    temp =x;
    while(temp > 0)
    {
        c++;
        temp/=10;
    }
    temp=x;
    while(temp>0)
    {
        sum+=pow(temp%10,c);
        temp=temp/10;
    }
    if(x ==  sum)
    {
        printf("Armstrong");
        
    }
    else
    {
        printf("Not Armstrong");
    }
    

    return 0;
}